__int64 __fastcall uu_env::parse_program_opt(__int64 a1)
{
  _DWORD v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 153) )
  {
    alloc::vec::Vec<T,A>::push(a1 + 72);
    return 0LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v2, aCannotSpecifyN, 39LL);
    v2[6] = 125;
    return alloc::boxed::Box<T>::new(v2);
  }
}
