void __rustcall uu_sort::print_sorted(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [48];
  
  Output::into_write(local_48,param_3);
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = *(undefined8 *)(param_1 + 4);
  uStack_60 = *(undefined8 *)(param_1 + 6);
  local_58 = *(undefined8 *)(param_1 + 8);
  uStack_50 = *(undefined8 *)(param_1 + 10);
  while( true ) {
                    /* try { // try from 00223b80 to 00223b9a has its CatchHandler @ 00223bb1 */
    lVar1 = _<itertools::adaptors::coalesce::CoalesceBy<I,F,C>as_core::iter::traits::iterator::Iterator>
            ::next(&local_78);
    if (lVar1 == 0) break;
    Line::print(lVar1,local_48,param_2);
  }
  core::ptr::
  drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
            (local_48);
  return;
}