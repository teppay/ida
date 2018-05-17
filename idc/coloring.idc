#include <idc.idc>
static main(void)
{
    auto head, op;
    head = NextHead(0x00000000, 0xFFFFFFFF);
    while ( head != BADADDR ){
        op = GetMnem(head);
        if ( op == "jmp" || op == "call" )
            SetColor(head, CIC_ITEM, 0x010187);
            
        if (op == "xor")
            SetColor(head, CIC_ITEM, 0x870119);
        head = NextHead(head, 0xFFFFFFFF);
    }
}