void __fastcall uu_pr::trailer_content(_QWORD *a1, char a2, char a3)
{
  __int64 v3; // rax

  if ( !a2 || a3 )
  {
    *a1 = 0LL;
    a1[1] = 8LL;
    a1[2] = 0LL;
  }
  else
  {
    v3 = alloc::alloc::Global::alloc_impl(8LL, 120LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 1LL;
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 32) = 1LL;
    *(_OWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 56) = 1LL;
    *(_OWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 80) = 1LL;
    *(_OWORD *)(v3 + 88) = 0LL;
    *(_QWORD *)(v3 + 104) = 1LL;
    *(_QWORD *)(v3 + 112) = 0LL;
    alloc::slice::hack::into_vec(a1, v3, 5LL);
  }
}
