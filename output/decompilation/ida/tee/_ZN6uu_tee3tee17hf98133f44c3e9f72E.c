__int64 __fastcall uu_tee::tee(__int64 a1)
{
  __int64 v1; // r15
  char v2; // bp
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int128 v12; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-98h]
  __int64 v14; // [rsp+18h] [rbp-90h]
  void *v15; // [rsp+20h] [rbp-88h]
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  void *v19; // [rsp+58h] [rbp-50h]
  __int128 v20; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]

  v1 = 0x2800000003LL;
  if ( *(_BYTE *)(a1 + 25) && (unsigned int)uucore::features::signals::ignore_interrupts() != 134 )
    return v1;
  v2 = *(_BYTE *)(a1 + 27);
  if ( v2 == 4 && (unsigned int)uucore::features::signals::enable_pipe_errors() != 134 )
    return v1;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v12 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v12 + 1) = v12 + 24 * v3;
  v13 = a1;
  core::iter::traits::iterator::Iterator::collect(&v16, &v12);
  result = *((_QWORD *)&v16 + 1);
  if ( __OFSUB__(-(__int64)v16, 1LL) )
    return result;
  v5 = v17;
  v20 = v16;
  v21 = v17;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, aStandardOutput, 17LL);
  v17 = v13;
  v16 = v12;
  v6 = std::io::stdio::stdout();
  v14 = alloc::boxed::Box<T>::new(v6);
  v15 = &unk_EA430;
  v12 = v16;
  v13 = v17;
  ((void (__fastcall *)(__int128 *, __int128 *))alloc::vec::Vec<T,A>::insert)(&v20, &v12);
  v13 = v21;
  v12 = v20;
  LOBYTE(v15) = v2;
  v14 = 0LL;
  v7 = std::io::stdio::stdin(&v20, &v12);
  v8 = alloc::boxed::Box<T>::new(v7);
  v18 = v8;
  v19 = &unk_EA498;
  if ( !*(_BYTE *)(a1 + 26) )
    goto LABEL_13;
  uu_tee::ensure_stdout_not_broken(&v16);
  if ( !(_BYTE)v16 )
  {
    if ( (BYTE1(v16) & 1) == 0 && v13 == 1 )
    {
      v1 = 0LL;
      goto LABEL_9;
    }
LABEL_13:
    if ( (std::io::copy::generic_copy(&v18, &v12) & 1) != 0 )
    {
      v10 = v9;
      if ( (unsigned __int8)std::io::error::Error::kind(v9) != 40 )
      {
LABEL_22:
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v10);
        core::ptr::drop_in_place<uu_tee::NamedReader>(v18, v19);
        goto LABEL_23;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v10);
    }
    if ( v5 == v3 )
    {
      v11 = <uu_tee::MultiWriter as std::io::Write>::flush(&v12);
      if ( v11 )
      {
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v11);
      }
      else
      {
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0LL);
        if ( !v14 )
          v1 = 0LL;
      }
    }
    v10 = 0LL;
    goto LABEL_22;
  }
  v1 = *((_QWORD *)&v16 + 1);
LABEL_9:
  core::ptr::drop_in_place<uu_tee::NamedReader>(v8, &unk_EA498);
LABEL_23:
  core::ptr::drop_in_place<uu_tee::MultiWriter>(&v12);
  return v1;
}