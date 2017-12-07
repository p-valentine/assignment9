#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
template <class T>
class Queue;

template <class T>
class Node {
    friend class Queue<T>;

private:

    Node() : element(), next(nullptr) {}

    Node(const T & e) : element(e), next(nullptr) {}
    T element;
    Node<T> * next;
};
template <class T>
class Queue 
{

public:
    Queue();
    bool empty();
    T & front();
    void push(T & e);
    T pop();
    void test_print() const;
    int size() {return size_;}
    void clear();
private:
    Node<T> * head_node_;
    Node<T> * end_node_;
    int size_ = 0;
};

template <class T>
inline Queue<T>::Queue()
{
    head_node_ = new Node<T>;
    end_node_ = head_node_;
    head_node_->next = nullptr;
}

template <class T>
bool Queue<T>::empty()
{
    if(head_node_->next == nullptr){
        return true;
    } else
        return false;
}
template <class T>
inline T & Queue<T>::front()
{
    Node<T> * node = head_node_->next;
    return node->element;
}

template <class T>
T Queue<T>::pop()
{
    Node<T> * delete_node = head_node_->next;
    head_node_->next = head_node_->next->next;
    T deleted_element = delete_node->element;
    delete delete_node;
    size_--;
    return deleted_element;
    
}
template <class T>
inline void Queue<T>::push(T & e)
{
    Node<T> * new_node = new Node<T>(e);
    end_node_->next = new_node;
    end_node_ = new_node;
    ++size_;
}
template <class T>
void Queue<T>::test_print() const
{
    for(Node<T> * buffer = head_node_->next; buffer != end_node_; 
            buffer = buffer->next){
        std::cout << buffer->element << ' ';
    }
    std::cout << '\n';
}
template <class T>
void Queue<T>::clear()
{
    
    
    
}


#endif /* QUEUE_H */
