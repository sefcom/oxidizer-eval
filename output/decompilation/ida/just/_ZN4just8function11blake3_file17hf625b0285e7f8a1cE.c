__int64 __fastcall just::function::blake3_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-7F8h] BYREF
  __int128 v10; // [rsp+18h] [rbp-7E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-7D0h]
  __int128 v12; // [rsp+38h] [rbp-7C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-7B0h]
  _BYTE v14[8]; // [rsp+50h] [rbp-7A8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-7A0h]
  __int64 v16; // [rsp+60h] [rbp-798h]

  just::execution_context::ExecutionContext::working_directory(
    (__int64)v14,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL),
    *(_QWORD *)(*(_QWORD *)a2 + 24LL));
  std::path::Path::join(v9, v15, v16, a3, a4);
  core::ptr::drop_in_place<std::path::PathBuf>(v14);
  blake3::Hasher::new(v14);
  if ( (blake3::Hasher::update_mmap_rayon(v14, v9) & 1) != 0 )
  {
    just::function::blake3_file::{{closure}}(&v10, v9[1], v9[2], v6);
    v7 = v11;
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    blake3::Hasher::finalize(&v10, v14);
    <T as alloc::string::SpecToString>::spec_to_string(&v12, &v10);
    *(_QWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 0LL;
  }
  core::ptr::drop_in_place<blake3::Hasher>(v14);
  core::ptr::drop_in_place<std::path::PathBuf>(v9);
  return a1;
}