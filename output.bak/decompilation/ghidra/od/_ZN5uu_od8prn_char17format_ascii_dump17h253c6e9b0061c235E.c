undefined8 * __rustcall
uu_od::prn_char::format_ascii_dump(undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
                    /* try { // try from 001d5a4e to 001d5a5a has its CatchHandler @ 001d5b02 */
  ::alloc::string::String::push(&local_48,0x3e);
  local_28 = param_3 + param_2;
  local_30 = param_2;
  pbVar1 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_30);
  if (pbVar1 != (byte *)0x0) {
    do {
      if ((byte)(*pbVar1 - 0x20) < 0x5f) {
        lVar2 = (ulong)*pbVar1 * 0x10;
        uVar3 = core::slice::iter::Iter<T>::make_slice
                          (*(long *)(C_CHARS + lVar2),
                           *(long *)(C_CHARS + lVar2 + 8) + *(long *)(C_CHARS + lVar2));
        ::alloc::vec::Vec<T,A>::append_elements(&local_48,uVar3);
      }
      else {
                    /* try { // try from 001d5a90 to 001d5ad3 has its CatchHandler @ 001d5b04 */
        ::alloc::string::String::push(&local_48,0x2e);
      }
      pbVar1 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_30);
    } while (pbVar1 != (byte *)0x0);
  }
                    /* try { // try from 001d5ad6 to 001d5ae2 has its CatchHandler @ 001d5b02 */
  ::alloc::string::String::push(&local_48,0x3c);
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return param_1;
}