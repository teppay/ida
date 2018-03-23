#include <idc.idc>
static main(void)
{
    auto head, op;
    head = NextHead(0x00000000, 0xFFFFFFFF);
    while ( head != BADADDR ){
        op = GetMnem(head);
        if ( op == "jmp" || op == "call" )
            SetColor(head, CIC_ITEM, 0xDDDDFF);
            
        if (op == "xor")
            SetColor(head, CIC_ITEM, 0xC9E6C8);
        head = NextHead(head, 0xFFFFFFFF);
    }
}