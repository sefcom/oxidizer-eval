_QWORD *__fastcall uu_tail::follow::files::FileHandling::remove(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-1E8h]
  __int128 v11; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1D0h]
  __int64 v13; // [rsp+30h] [rbp-1C8h]
  _BYTE src[208]; // [rsp+38h] [rbp-1C0h] BYREF
  _BYTE dest[208]; // [rsp+108h] [rbp-F0h] BYREF

  if ( (unsigned __int8)std::path::Path::is_absolute(a3, a4)
    || (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a3, a4) )
  {
    goto LABEL_5;
  }
  std::sys::pal::unix::fs::canonicalize(&v11, a3, a4);
  if ( (_QWORD)v11 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v11 + 1));
LABEL_5:
    std::path::Path::to_path_buf(&v9, a3, a4);
    goto LABEL_6;
  }
  v10 = v12;
  v9 = v11;
LABEL_6:
  v6 = core::hash::BuildHasher::hash_one(a2 + 56, &v9);
  hashbrown::raw::RawTable<T,A>::remove_entry(&v11, a2 + 24, v6, &v9);
  v7 = v13;
  if ( v13 == 3 )
    core::option::unwrap_failed(&anon_c568fa996e9b1afffbd2fe86e67742f4_10_llvm_893476530518564186);
  memcpy(dest, src, sizeof(dest));
  if ( (_QWORD)v11 )
    _rust_dealloc(*((_QWORD *)&v11 + 1), v11, 1LL);
  *a1 = v7;
  memcpy(a1 + 1, dest, 0xD0uLL);
  if ( (_QWORD)v9 )
    _rust_dealloc(*((_QWORD *)&v9 + 1), v9, 1LL);
  return a1;
}
