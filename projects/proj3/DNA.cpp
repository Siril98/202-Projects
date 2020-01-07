// File: DNA.cpp
// Project: CMSC 202 Project 3, Spring 2017
// Author: Siril Pattammady
// Class file for DNA.H file
// Date: 3/30/2017
// Lab Section:13
// E-Mail: psiril1@umbc.edu
// This program inserts nodes to the end of a linked list, displays
// the linked list as single strand, base pairs, checks the instance of
// how many times a trinucleotide is recognized (Num Amino), displays
// all trinucleotide in given strand, measures the size of linked list
// and clears linked list at the end of program.

#include "DNA.h"


//name: DNA (default constructor)
//pre: None
//post: A linked list (DNA) where m_head and m_tail points to NULL
DNA::DNA(){

  m_head = NULL;
  m_tail = NULL;
  m_size = 0;

}

//name: ~DNA (destructor)
//pre: There is an existing linked list
//post: A linked list (DNA) is deallocated (including all dynamically
//     allocated nucleotides)
//     to have no memory leaks!
DNA::~DNA(){

  Clear();

}
//name: InsertEnd
//pre: Takes in a char. Creates new node (nucleotide).
//     Requires a linked list (strand of DNA)
//post: Adds a new node (nucleotide) to the end of the linked list (strand of DNA).
void DNA::InsertEnd(char payload){


  //Allocates memory for a new node and points it to create a new Node
  Nucleotide* newNucleotide = new Nucleotide();
  newNucleotide -> m_payload = payload;
  newNucleotide -> m_next = NULL;
  
  //If linked list is empty
  if(m_head == NULL){
    m_head = newNucleotide;
    m_tail = newNucleotide;

  }

  //Inserting new Nucleotide(node) to end of linked-list
  else{
    
    m_tail -> m_next = newNucleotide;
    m_tail = m_tail ->m_next;
    
  }
  m_size++;
  

 
 
}
//name: Display
//pre: Outputs the dna strand(s); Pass it 1 for just the nucleotides;
//     2 for the nucleotides and it's complement (base pair)
//post: None
void DNA::Display(int numStrand){
  
  
  Nucleotide* temp = m_head;

  
  // If user selects 1
  if(numStrand == 1){
  
    while(temp != NULL){
      cout << temp -> m_payload << endl;
      temp = temp->m_next;

    }
 
  }  
  // Output nucleotides and its complement
  else if(numStrand == 2){


    temp = m_head;
  
    while(temp != NULL){
      if(temp->m_payload == 'A')
	cout<< "A-T"<< endl;
      else if(temp->m_payload == 'G')
	cout<< "G-C" << endl;
      else if(temp->m_payload == 'C')
	cout<<"C-G" << endl;
      else if(temp->m_payload == 'T')
	cout<<"T-A" << endl;
      temp = temp->m_next;
 
    }
  }  
}

//name: NumAmino
//pre: Takes in an amino acid name and its trinucleotide codon
//     Trinucleotides are just three nucleotides in a row.
//post: Searches the linked list for specific sequence; outputs results
void DNA::NumAmino(string name, string trinucleotide){


  Nucleotide* curr = m_head;
  int instance =0;
  int counter = 0;
  string temp = "";


  //Loops hrough whole linked list and while
  // Counter is not equal to 3
  while(curr!=NULL && counter !=3){
    
    //Saves concatenated string(3) in loop
    temp += curr->m_payload;
    curr = curr->m_next;
    counter++;
    //Compares  to trinucleotide and updates
    // every instance it is recognized in strand
    if(counter == 3){
      if(temp == trinucleotide){
	instance++;
	temp ="";
	counter = 0;
      }
      temp = "";
      counter = 0;
    }
  }
  cout<< name << " " << instance <<" " <<"identified" << endl;
}

//name: Sequence
//pre: Takes in full genetic code of one polynucleotide and looks at
//     one trinucleotide at a time.
//     Known amino acids are displayed, others are unknown. Stored in dynamic array.
//post: Displays either name of amino acid or unknown for each trinucleotide
void DNA::Sequence(){
 
  Nucleotide* curr = m_head;
  int counter = 0;
  string temp = "";
  string* array = new string[m_size];
  int amino_acid = 0;
  
  while(curr!= NULL && counter !=3){

    temp+= curr->m_payload;
    curr = curr -> m_next;
    counter++;
    if(counter == 3){

      amino_acid++;
      for(int i = 0; counter == 3; i++){
	array[i] = Translate(temp);
	cout<< array[i] << endl;
	temp = "";
	counter = 0;	  
      }      
      temp = "";
      counter = 0;
    }
  }
  delete [] array;
  cout<< "Total Amino Acids Identified:" << "" << amino_acid << endl;
  
}


//name: Translate (Provided)
//pre: Takes in three nucleotides (must be G,C,T, or A)
//post: Translates a trinucleotide to its amino acid
string DNA::Translate(const string trinucleotide){
  if((trinucleotide=="ATT")||(trinucleotide=="ATC")||(trinucleotide=="ATA"))
    return ("Isoleucine");
  else if((trinucleotide=="CTT")||(trinucleotide=="CTC")||(trinucleotide=="CTA")||
	  (trinucleotide=="CTG")|| (trinucleotide=="TTA")||(trinucleotide=="TTG"))
    return ("Leucine");
  else if((trinucleotide=="GTT")||(trinucleotide=="GTC")||
	  (trinucleotide=="GTA")||(trinucleotide=="GTG"))
    return ("Valine");
  else if((trinucleotide=="TTT")||(trinucleotide=="TTC"))
    return ("Phenylalanine");
  else if((trinucleotide=="ATG"))
    return ("Methionine");
  else if((trinucleotide=="TGT")||(trinucleotide=="TGC"))
    return ("Cysteine");
  else if((trinucleotide=="GCT")||(trinucleotide=="GCC")||
	  (trinucleotide=="GCA")||(trinucleotide=="GCG"))
    return ("Alanine");
  else if((trinucleotide=="GGT")||(trinucleotide=="GGC")||
	  (trinucleotide=="GGA")||(trinucleotide=="GGG"))
    return ("Glycine");
  else if((trinucleotide=="CCT")||(trinucleotide=="CCC")||
	  (trinucleotide=="CCA")||(trinucleotide=="CCG"))
    return ("Proline");
  else if((trinucleotide=="ACT")||(trinucleotide=="ACC")||
	  (trinucleotide=="ACA")||(trinucleotide=="ACG"))
    return ("Threonine");
  else if((trinucleotide=="TCT")||(trinucleotide=="TCC")||
	  (trinucleotide=="TCA")||(trinucleotide=="TCG")||
	  (trinucleotide=="AGT")||(trinucleotide=="AGC"))
    return ("Serine");
  else if((trinucleotide=="TAT")||(trinucleotide=="TAC"))
    return ("Tyrosine");
  else if((trinucleotide=="TGG"))
    return ("Tryptophan");
  else if((trinucleotide=="CAA")||(trinucleotide=="CAG"))
    return ("Glutamine");
  else if((trinucleotide=="AAT")||(trinucleotide=="AAC"))
    return ("Asparagine");
  else if((trinucleotide=="CAT")||(trinucleotide=="CAC"))
    return ("Histidine");
  else if((trinucleotide=="GAA")||(trinucleotide=="GAG"))
    return ("Glutamic acid");
  else if((trinucleotide=="GAT")||(trinucleotide=="GAC"))
    return ("Aspartic acid");
  else if((trinucleotide=="AAA")||(trinucleotide=="AAG"))
    return ("Lysine");
  else if((trinucleotide=="CGT")||(trinucleotide=="CGC")||(trinucleotide=="CGA")||
	  (trinucleotide=="CGG")||(trinucleotide=="AGA")||(trinucleotide=="AGG"))
    return ("Arginine");
  else if((trinucleotide=="TAA")||(trinucleotide=="TAG")||(trinucleotide=="TGA"))
    return ("Stop");
  else
    cout << "returning unknown" << endl;
  return ("Unknown");
}

//name: IsEmpty
//pre: Takes in a linked list (DNA)
//post: If the linked list (strand of DNA) is empty or not
// (didn't need to use Dixon said its alright)
bool DNA::IsEmpty(){

  if(m_head == NULL){
    return true;
   
  }
}
//name: SizeOf
//pre: Takes in a linked list (DNA)
//post: Returns with the total number of nucleotides loaded
void DNA::SizeOf(){

 
  cout<< m_size <<" " << "base pairs listed." << endl;
  cout<< m_size/3 <<" "<< "trinucleotides listed." << endl;

}
//name Clear
//pre: Takes in a linked list (DNA)
//post: Clears out the linked list (all nodes too)
void DNA::Clear(){
  
  Nucleotide* del = m_head;

  while(del != NULL){

    m_head = m_head ->m_next;
    delete del;

    del = m_head;
    
  }
  // Ensuring that the node will be cleared
  m_head = NULL;
  m_tail = NULL;
}
