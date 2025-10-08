__int64 __fastcall uu_env::parse_program_opt(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 153) )
  {
    alloc::vec::Vec<T,A>::push(a1 + 72, a2, a3, &off_110850);
    return 0LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v4, aCannotSpecifyN, 39LL);
    v4[6] = 125;
    return alloc::boxed::Box<T>::new(v4);
  }
}