void __rustcall
uu_dd::parseargs::Parser::read(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long local_50;
  long local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_48 = param_4 * 0x10 + param_3;
  local_50 = param_3;
  puVar1 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    do {
                    /* try { // try from 001d2b87 to 001d2b91 has its CatchHandler @ 001d2bf0 */
      parse_operand(&local_40,param_2,*puVar1,puVar1[1]);
      if (local_40 != 0xe) {
        *(undefined4 *)(param_1 + 3) = local_30;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_2c;
        *(undefined4 *)(param_1 + 4) = uStack_28;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_24;
        *(int *)(param_1 + 1) = local_40;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
        *(undefined4 *)(param_1 + 2) = uStack_38;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_34;
        *param_1 = 2;
        core::ptr::drop_in_place<uu_dd::parseargs::Parser>(param_2);
        return;
      }
      puVar1 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_50);
    } while (puVar1 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_00266e08)(param_1,param_2,0xd8);
  return;
}