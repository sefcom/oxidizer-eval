void __fastcall uu_expr::syntax_tree::Parser<S>::parse(__int64 a1, _QWORD *a2)
{
  __int128 v2; // xmm0
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+8h] [rbp-90h] BYREF
  __m256i v8; // [rsp+10h] [rbp-88h]
  __m256i v9; // [rsp+30h] [rbp-68h]
  _BYTE v10[40]; // [rsp+58h] [rbp-40h] BYREF

  if ( !a2[1] )
  {
    *(_QWORD *)(a1 + 8) = 3LL;
    goto LABEL_5;
  }
  uu_expr::syntax_tree::Parser<S>::parse_precedence((__int64)v10, (__int64)a2, 0LL);
  v9 = *(__m256i *)&v10[8];
  if ( *(_QWORD *)v10 == 0x8000000000000005LL )
  {
    v2 = *(_OWORD *)v9.m256i_i8;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v9.m256i_u64[2];
    *(_OWORD *)(a1 + 8) = v2;
LABEL_5:
    *(_QWORD *)a1 = 0x8000000000000005LL;
    return;
  }
  v8 = v9;
  v7 = *(_QWORD *)v10;
  v3 = a2[2];
  if ( v3 >= a2[1] )
  {
    *(_QWORD *)(a1 + 32) = v8.m256i_i64[3];
    v5 = v7;
    v6 = v8.m256i_i64[0];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8.m256i_u64[1];
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    v4 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(
           *(_QWORD *)(*a2 + 24 * v3 + 8),
           *(_QWORD *)(*a2 + 24 * v3 + 16));
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, v4);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v10[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v10;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0x8000000000000005LL;
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v7);
  }
}