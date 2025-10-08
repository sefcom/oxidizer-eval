__int64 __fastcall uu_pr::trailer_content(__int64 *a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 8LL;
  if ( (a2 & 1) != 0 && (a3 & 1) == 0 )
  {
    result = alloc::alloc::Global::alloc_impl(8LL, 120LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 1LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 32) = 1LL;
    *(_OWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 56) = 1LL;
    *(_OWORD *)(result + 64) = 0LL;
    *(_QWORD *)(result + 80) = 1LL;
    *(_OWORD *)(result + 88) = 0LL;
    *(_QWORD *)(result + 104) = 1LL;
    *(_QWORD *)(result + 112) = 0LL;
    v4 = 5LL;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  a1[1] = result;
  a1[2] = v4;
  return result;
}