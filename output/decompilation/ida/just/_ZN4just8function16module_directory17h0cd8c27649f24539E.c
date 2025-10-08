__int64 __fastcall just::function::module_directory(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int128 v10; // [rsp+10h] [rbp-28h]

  v2 = std::path::Path::parent(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 80LL),
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 88LL));
  if ( !v2 )
    core::option::unwrap_failed(&off_42FF68);
  v4 = v2;
  v5 = v3;
  core::str::converts::from_utf8(&v9, v2, v3);
  if ( (v9 & 1) != 0 )
  {
    just::function::module_directory::{{closure}}(a1 + 8, v4, v5);
    v6 = 1LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v10);
    v7 = v9;
    *(_OWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 8) = v7;
    v6 = 0LL;
  }
  *(_QWORD *)a1 = v6;
  return a1;
}