undefined  [16] __rustcall
uu_tail::chunks::BytesChunkBuffer::print(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
                    /* try { // try from 0020b93f to 0020b948 has its CatchHandler @ 0020b9df */
  ::alloc::collections::vec_deque::VecDeque<T,A>::iter(&local_38,param_1);
  local_48 = local_28;
  uStack_40 = uStack_20;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  do {
    puVar5 = (undefined8 *)
             _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_58)
    ;
    uVar4 = uStack_4c;
    uVar3 = uStack_50;
    uVar2 = uStack_54;
    uVar1 = local_58;
    if (puVar5 == (undefined8 *)0x0) {
      local_58 = (undefined4)local_48;
      uStack_54 = local_48._4_4_;
      uStack_50 = (undefined4)uStack_40;
      uStack_4c = uStack_40._4_4_;
      local_48 = CONCAT44(uVar2,uVar1);
      uStack_40 = CONCAT44(uVar4,uVar3);
      puVar5 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_58);
      if (puVar5 == (undefined8 *)0x0) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = &local_48;
        auVar8 = auVar8 << 0x40;
        goto LAB_0020b9c7;
      }
    }
                    /* try { // try from 0020b99e to 0020b9ad has its CatchHandler @ 0020b9e1 */
    uVar6 = BytesChunk::get_buffer(*puVar5);
    lVar7 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all(param_2,uVar6)
    ;
  } while (lVar7 == 0);
                    /* try { // try from 0020b9b3 to 0020b9bb has its CatchHandler @ 0020b9df */
  auVar8 = uucore::mods::error::
           _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
           ::from(lVar7);
LAB_0020b9c7:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
            (param_2);
  return auVar8;
}