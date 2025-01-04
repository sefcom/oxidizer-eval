long __rustcall uu_tail::chunks::LinesChunkBuffer::print(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  ::alloc::collections::vec_deque::VecDeque<T,A>::iter(&local_38,param_1);
  do {
    puVar6 = (undefined8 *)
             _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_38)
    ;
    uVar4 = uStack_2c;
    uVar3 = uStack_30;
    uVar2 = uStack_34;
    uVar1 = local_38;
    if (puVar6 == (undefined8 *)0x0) {
      local_38 = local_28;
      uStack_34 = uStack_24;
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      local_28 = uVar1;
      uStack_24 = uVar2;
      uStack_20 = uVar3;
      uStack_1c = uVar4;
      puVar6 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_38);
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
    }
    lVar5 = LinesChunk::print_bytes(*puVar6,param_2);
  } while (lVar5 == 0);
  return lVar5;
}