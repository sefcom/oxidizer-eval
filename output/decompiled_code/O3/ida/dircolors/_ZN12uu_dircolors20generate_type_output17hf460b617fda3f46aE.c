__int64 __fastcall uu_dircolors::generate_type_output(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int128 v12; // [rsp+0h] [rbp-78h]
  __int128 v13; // [rsp+0h] [rbp-78h]
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  __int128 v15; // [rsp+18h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  if ( *a2 == 2 )
  {
    v2 = _rust_alloc(432LL, 8LL);
    if ( v2 )
    {
      *(_QWORD *)&v12 = 18LL;
      *((_QWORD *)&v12 + 1) = v2;
      v14 = 0LL;
      v15 = (unsigned __int64)&v14;
      v16 = v2;
      <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(
        &anon_4406f472a8377c7ece58ca9d20f54484_129_llvm_13238753694568376422,
        &anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422,
        &v15);
      v17 = v12;
      v3 = v14;
      v18 = v14;
      v4 = *((_QWORD *)&v12 + 1);
      alloc::str::join_generic_copy(&v15, *((_QWORD *)&v12 + 1), v14, asc_228FF, 1LL);
      *(_QWORD *)(a1 + 16) = v16;
      *(_OWORD *)a1 = v15;
      if ( v3 )
      {
        v5 = (_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL);
        do
        {
          v6 = *(v5 - 1);
          if ( v6 )
            _rust_dealloc(*v5, v6, 1LL);
          v5 += 3;
          --v3;
        }
        while ( v3 );
      }
      goto LABEL_14;
    }
LABEL_17:
    alloc::raw_vec::handle_error(8LL, 432LL);
  }
  v7 = _rust_alloc(432LL, 8LL);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)&v13 = 18LL;
  *((_QWORD *)&v13 + 1) = v7;
  v14 = 0LL;
  v15 = (unsigned __int64)&v14;
  v16 = v7;
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(
    &anon_4406f472a8377c7ece58ca9d20f54484_129_llvm_13238753694568376422,
    &anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422,
    &v15);
  v17 = v13;
  v8 = v14;
  v18 = v14;
  v4 = *((_QWORD *)&v13 + 1);
  alloc::str::join_generic_copy(&v15, *((_QWORD *)&v13 + 1), v14, asc_22900, 1LL);
  *(_QWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v15;
  if ( v8 )
  {
    v9 = (_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL);
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
        _rust_dealloc(*v9, v10, 1LL);
      v9 += 3;
      --v8;
    }
    while ( v8 );
  }
LABEL_14:
  if ( (_QWORD)v17 )
    _rust_dealloc(v4, 24 * v17, 8LL);
  return a1;
}
