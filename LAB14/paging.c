#include<stdio.h>
int main()
{
    int logical_mem, physical_mem, page_size;
    int pages, frames;
    printf("Enter Logical Memory Size: ");
    scanf("%d",&logical_mem);
    printf("Enter Physical Memory Size: ");
    scanf("%d",&physical_mem);
    printf("Enter Page Size: ");
    scanf("%d",&page_size);
    pages = logical_mem / page_size;
    frames = physical_mem / page_size;
    printf("\nNumber of Pages = %d\n",pages);
    printf("Number of Frames = %d\n",frames);
    int page_table[50];
    printf("\nEnter Page Table Mapping:\n");
    for(int i=0;i<pages;i++)
    {
        printf("Page %d -> Frame: ",i);
        scanf("%d",&page_table[i]);
    }
    int logical_address;
    printf("\nEnter Logical Address: ");
    scanf("%d",&logical_address);
    int page_no = logical_address / page_size;
    int offset = logical_address % page_size;
    if(page_no >= pages)
    {
        printf("Invalid Logical Address\n");
        return 0;
    }
    int frame_no = page_table[page_no];
    int physical_address =
        frame_no * page_size + offset;
    printf("\nPage Number = %d\n",page_no);
    printf("Offset = %d\n",offset);
    printf("Frame Number = %d\n",frame_no);
    printf("Physical Address = %d\n",
            physical_address);
    return 0;
}