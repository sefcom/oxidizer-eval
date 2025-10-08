__int64 __fastcall just::function::justfile_directory(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *a2;
  v3 = std::path::Path::parent(*(_QWORD *)(*(_QWORD *)(*a2 + 24) + 8LL), *(_QWORD *)(*(_QWORD *)(*a2 + 24) + 16LL));
  if ( v3 )
  {
    v5 = v3;
    v6 = v4;
    core::str::converts::from_utf8(v11, v3, v4);
    if ( (v11[0] & 1) == 0 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, *(_QWORD *)&v11[8]);
      v9 = *(_QWORD *)v11;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v11[8];
      *(_QWORD *)(a1 + 8) = v9;
      v8 = 0LL;
      goto LABEL_7;
    }
    just::function::justfile_directory::{{closure}}(a1 + 8, v5, v6);
  }
  else
  {
    just::function::justfile_directory::{{closure}}(
      v11,
      *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL),
      *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16LL));
    v7 = *(_QWORD *)&v11[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v11;
    *(_QWORD *)(a1 + 24) = v7;
  }
  v8 = 1LL;
LABEL_7:
  *(_QWORD *)a1 = v8;
  return a1;
}