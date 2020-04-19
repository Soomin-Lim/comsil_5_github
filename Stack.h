#include "LinkedList.h"

template <class T>
class Stack : public LinkedList<T>{
	public:
		virtual bool Delete (T &element){
			//first가 0이면 false반환
			if(this->first == 0)
                return false;

			// LinkedList와 달리 Stack은 맨 앞의 원소 삭제
            Node<T> *current = this->first;
            this->first = current->link;
            
            element = current->data;
            delete(current);
            
            (this->current_size)--;
			return true;
		}
};
