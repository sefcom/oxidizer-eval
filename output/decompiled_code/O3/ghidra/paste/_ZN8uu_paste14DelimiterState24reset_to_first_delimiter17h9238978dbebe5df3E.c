void __rustcall uu_paste::DelimiterState::reset_to_first_delimiter(int *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*param_1 == 2) {
    core::iter::adapters::cycle::Cycle<I>::new
              (&local_28,*(long *)(param_1 + 6),
               *(long *)(param_1 + 8) * 0x10 + *(long *)(param_1 + 6));
    *(undefined8 *)(param_1 + 0xe) = local_18;
    *(undefined8 *)(param_1 + 0x10) = uStack_10;
    *(undefined8 *)(param_1 + 10) = local_28;
    *(undefined8 *)(param_1 + 0xc) = uStack_20;
  }
  return;
}