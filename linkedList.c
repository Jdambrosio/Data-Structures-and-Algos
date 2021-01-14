//Linked Lists 1

struct Node 
{
	int data;
	struct Node* next;
};

int main()
{
	int c;
	int size;
	struct Node* head = NULL;

	#printf("Please Enter a Nonnegative Size"\n);

	#size = getchar();

	printf("Please Enter a Sequence of Unsorted Numbers"\n);
	
	while ((c = getchar() != EOF)
	{
			
