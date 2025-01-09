void __rustcall uu_ptx::format_roff_field(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [2];
  long lStack_68;
  undefined8 auStack_60 [6];
  
  uStack_b8 = 0;
  uStack_b0 = 1;
  uStack_a8 = 0;
  puStack_a0 = param_1;
  lStack_98 = param_3;
  _<char_as_core::str::pattern::Pattern>::into_searcher(auStack_60);
  lVar4 = 0;
  while( true ) {
    _<core::str::pattern::CharSearcher_as_core::str::pattern::Searcher>::next_match
              (&lStack_90,auStack_60);
    if (lStack_90 == 0) break;
    core::str::iter::MatchIndicesInternal<P>::next::___closure__
              (alStack_78,auStack_60[0],uStack_88,uStack_80);
    lVar2 = lStack_68;
    lVar1 = alStack_78[0];
    uVar3 = core::slice::iter::Iter<T>::make_slice(lVar4 + param_2,param_2 + alStack_78[0]);
    ::alloc::vec::Vec<T,A>::append_elements(&uStack_b8,uVar3);
    ::alloc::vec::Vec<T,A>::append_elements(&uStack_b8,&DAT_0015eced,2);
    lVar4 = lVar2 + lVar1;
  }
  uVar3 = core::slice::iter::Iter<T>::make_slice(lVar4 + param_2,lStack_98 + param_2);
  ::alloc::vec::Vec<T,A>::append_elements(&uStack_b8,uVar3);
  puStack_a0[2] = uStack_a8;
  *puStack_a0 = uStack_b8;
  puStack_a0[1] = uStack_b0;
  return;
}