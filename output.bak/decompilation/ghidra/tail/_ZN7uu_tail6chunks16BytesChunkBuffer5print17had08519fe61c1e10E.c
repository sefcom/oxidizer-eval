undefined8 __rustcall
uu_tail::chunks::BytesChunkBuffer::print(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
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
    puVar7 = (undefined8 *)
             _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_38)
    ;
    uVar4 = uStack_2c;
    uVar3 = uStack_30;
    uVar2 = uStack_34;
    uVar1 = local_38;
    if (puVar7 == (undefined8 *)0x0) {
      local_38 = local_28;
      uStack_34 = uStack_24;
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      local_28 = uVar1;
      uStack_24 = uVar2;
      uStack_20 = uVar3;
      uStack_1c = uVar4;
      puVar7 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_38);
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
    }
    uVar5 = BytesChunk::get_buffer(*puVar7);
    lVar6 = std::io::impls::_<impl_std::io::Write_for&mut_W>::write_all(param_2,uVar5);
  } while (lVar6 == 0);
  uVar5 = uucore::mods::error::
          _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
          ::from(lVar6);
  return uVar5;
}