#include<stdio.h>
int main()
{
    int logical_mem, physical_mem, page_size;
    int pages, frames;
    printf("Enter logical memory size: ");
    scanf("%d",&logical_mem);
    printf("Enter physical memory size: ");
    scanf("%d",&physical_mem);
    printf("Enter page size: ");
    scanf("%d",&page_size);
    pages = logical_mem / page_size;
    frames = physical_mem / page_size;
    printf("Number of pages = %d\n",pages);
    printf("Number of frames = %d\n",frames);
    int page_table[50];
    printf("Enter page table (frame numbers):\n");
    for(int i=0;i<pages;i++)
        scanf("%d",&page_table[i]);
    int logical_addr;
    printf("Enter logical address: ");
    scanf("%d",&logical_addr);
    int page = logical_addr / page_size;
    int offset = logical_addr % page_size;
    if(page >= pages)
    {
        printf("Invalid address\n");
        return 0;
    }
    int frame = page_table[page];
    int physical_addr = frame * page_size + offset;
    printf("Page Number = %d\n",page);
    printf("Offset = %d\n",offset);
    printf("Frame Number = %d\n",frame);
    printf("Physical Address = %d\n",physical_addr);
    return 0;
}