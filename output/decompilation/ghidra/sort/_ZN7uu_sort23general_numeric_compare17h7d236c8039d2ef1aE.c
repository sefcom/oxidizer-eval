void __rustcall uu_sort::general_numeric_compare(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = _<uu_sort::GeneralF64ParseResult_as_core::cmp::PartialOrd>::partial_cmp();
  if (cVar2 != '\x02') {
    return;
  }
  core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ffe08);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}