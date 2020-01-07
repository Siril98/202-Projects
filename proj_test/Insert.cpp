// Testing insert char at end of linked list


#include <iostream>
#include <string>

using namespace std;

struct Nucleotide {
  char m_payload;
  Nucleotide *m_next;

};

Nucleotide* head = NULL;

void insert (int n);
void print();
void insert(int n){

  Nucleotide* temp = new Nucleotide;
  temp->m_payload = n;
  temp-> m_next = NULL;

  if(head == NULL)
    {
      head = temp;
    }
  else
    {
      Nucleotide *temp2 = head;

      while(temp2->m_next != NULL)
	{
	  temp2 = temp -> m_next;
	}
      temp2->m_next = temp;
    }
}
void print(){

  Nucleotide* current = head;
  while(current != NULL)
    {
      cout << current->m_payload << " ";
      current = current -> m_next;
    }
}


int main()
{
  
  insert(1);
  insert(3);
  insert(5);
  print();
 
  insert(6);
  insert(7);
  



  return 0;
}

