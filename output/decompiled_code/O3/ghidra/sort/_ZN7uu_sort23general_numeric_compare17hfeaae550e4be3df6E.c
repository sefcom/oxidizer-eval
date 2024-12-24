char __rustcall
uu_sort::general_numeric_compare(double param_1,double param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  char cVar2;
  
  if ((param_3 != 3) || (param_4 != 3)) {
    cVar2 = -1;
    if (param_4 <= param_3) {
      cVar2 = param_3 != param_4;
    }
    return cVar2;
  }
  if (param_1 <= param_2) {
    return -(param_1 < param_2);
  }
  if (param_2 <= param_1) {
    return '\x01';
  }
  core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ff2e0);
  pcVar1 = (code *)swi(3);
  cVar2 = (*pcVar1)();
  return cVar2;
}