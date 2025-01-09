void __rustcall uu_sort::print_sorted(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined local_48 [48];
  
  Output::into_write(local_48,param_3);
  local_58 = *(undefined8 *)(param_1 + 0x14);
  local_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x12);
  local_a8 = *param_1;
  uStack_a4 = param_1[1];
  uStack_a0 = param_1[2];
  uStack_9c = param_1[3];
  local_98 = *(undefined8 *)(param_1 + 4);
  uStack_90 = *(undefined8 *)(param_1 + 6);
  local_88 = *(undefined8 *)(param_1 + 8);
  uStack_80 = *(undefined8 *)(param_1 + 10);
  local_78 = *(undefined8 *)(param_1 + 0xc);
  uStack_70 = *(undefined8 *)(param_1 + 0xe);
  while( true ) {
                    /* try { // try from 00224ad0 to 00224aea has its CatchHandler @ 00224b04 */
    lVar1 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::next
                      (&local_a8);
    if (lVar1 == 0) break;
    Line::print(lVar1,local_48,param_2);
  }
  core::ptr::
  drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
            (local_48);
  return;
}