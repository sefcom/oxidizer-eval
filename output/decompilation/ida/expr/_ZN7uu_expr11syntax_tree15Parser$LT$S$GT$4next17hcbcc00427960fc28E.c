__int64 __fastcall uu_expr::syntax_tree::Parser<S>::next(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int128 v10; // [rsp+8h] [rbp-20h] BYREF
  __int64 v11; // [rsp+18h] [rbp-10h]

  v3 = a2[1];
  v4 = a2[2];
  if ( v4 >= v3 )
  {
    v8 = v4 - 1;
    if ( v8 >= v3 )
      core::panicking::panic_bounds_check(v8, a2[1], &off_149920);
    v9 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(
           *(_QWORD *)(*a2 + 24 * v8 + 8),
           *(_QWORD *)(*a2 + 24 * v8 + 16));
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, v9);
    *(_QWORD *)a1 = 1LL;
    *(_OWORD *)(a1 + 8) = v10;
    result = v11;
    *(_QWORD *)(a1 + 24) = v11;
  }
  else
  {
    v5 = *a2;
    a2[2] = v4 + 1;
    result = <alloc::string::String as core::convert::AsRef<str>>::as_ref(
               *(_QWORD *)(v5 + 24 * v4 + 8),
               *(_QWORD *)(v5 + 24 * v4 + 16));
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 13LL;
  }
  return result;
}