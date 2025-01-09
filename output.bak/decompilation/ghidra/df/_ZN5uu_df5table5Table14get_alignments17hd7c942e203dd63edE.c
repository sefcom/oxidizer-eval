void __rustcall uu_df::table::Table::get_alignments(undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
  local_28 = param_3 + param_2;
  local_30 = param_2;
  while( true ) {
    pbVar1 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_30);
    if (pbVar1 == (byte *)0x0) break;
                    /* try { // try from 001cbb89 to 001cbb90 has its CatchHandler @ 001cbbae */
    ::alloc::vec::Vec<T,A>::push(&local_48,(0x3deU >> (*pbVar1 & 0x1f) & 1) != 0);
  }
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return;
}