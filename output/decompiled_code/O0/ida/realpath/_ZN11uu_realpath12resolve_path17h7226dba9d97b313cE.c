        __int64 a9)
{
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v15; // rdx
  __int64 v16; // r14
  __int128 v17; // [rsp+8h] [rbp-A0h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int128 v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  __int128 v21; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h] BYREF
  __int128 v25; // [rsp+68h] [rbp-40h] BYREF
  __int64 v26; // [rsp+78h] [rbp-30h]

  uucore::features::fs::canonicalize(&v25, a1, a2, a5, a4);
  result = *((_QWORD *)&v25 + 1);
  v11 = v25;
  v12 = 0x8000000000000000LL;
  if ( (_QWORD)v25 == 0x8000000000000000LL )
    return result;
  v13 = a8;
  v17 = v25;
  v18 = v26;
  if ( a8 )
  {
    if ( !*((_QWORD *)&v25 + 1) || v26 < 0 )
LABEL_21:
      core::panicking::panic_nounwind(
        anon_3f82f01e3ba563847365fa446bc88cdd_30_llvm_12311298718025117761,
        162LL,
        v12,
        v11);
    if ( (unsigned __int8)std::path::Path::_starts_with(*((_QWORD *)&v25 + 1), v26, a8, a9) )
    {
      v22 = v18;
      v21 = v17;
      if ( a6 )
        v13 = a6;
      else
        a7 = a9;
      v15 = v13;
      goto LABEL_12;
    }
LABEL_13:
    v20 = v18;
    v19 = v17;
    goto LABEL_14;
  }
  if ( !a6 )
    goto LABEL_13;
  v22 = v26;
  v21 = v25;
  v15 = a6;
LABEL_12:
  uucore::features::fs::make_path_relative_to(&v19, &v21, v15, a7);
LABEL_14:
  v24 = std::io::stdio::stdout();
  if ( !*((_QWORD *)&v19 + 1) )
    goto LABEL_21;
  v12 = v20;
  if ( v20 < 0 )
    goto LABEL_21;
  v16 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v24);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v21, &v19);
  if ( *((_QWORD *)&v21 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v20, v21, *((_QWORD *)&v21 + 1), v22);
  result = v16;
  if ( !v16 )
  {
    v23 = std::io::stdio::stdout();
    return <std::io::stdio::Stdout as std::io::Write>::write_all(&v23);
  }
  return result;
}
