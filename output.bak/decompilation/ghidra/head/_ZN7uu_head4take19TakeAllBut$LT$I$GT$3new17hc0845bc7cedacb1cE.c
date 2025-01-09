undefined8 * __rustcall
uu_head::take::TakeAllBut<I>::new
          (undefined8 *param_1,undefined8 param_2,undefined param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_88 = 0;
  local_80 = 8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = param_2;
  local_90 = param_3;
  local_68 = param_4;
  if (param_4 != 0) {
    uVar1 = 0;
    do {
      uVar1 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar1);
                    /* try { // try from 001c452b to 001c4568 has its CatchHandler @ 001c45b3 */
      _<uucore::features::lines::Lines<B>as_core::iter::traits::iterator::Iterator>::next
                (&local_60,&local_98);
      if (CONCAT44(uStack_5c,local_60) == -0x7fffffffffffffff) break;
      local_38 = local_50;
      local_48 = local_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uucore::features::ringbuffer::RingBuffer<T>::push_back(&local_60,&local_88,&local_48);
      core::ptr::
      drop_in_place<core::option::Option<core::result::Result<alloc::vec::Vec<u8>,std::io::error::Error>>>
                (&local_60);
    } while (uVar1 < param_4);
  }
  param_1[4] = local_68;
  param_1[2] = local_78;
  param_1[3] = uStack_70;
  *param_1 = local_88;
  param_1[1] = local_80;
  param_1[5] = local_98;
  *(undefined *)(param_1 + 6) = local_90;
  return param_1;
}