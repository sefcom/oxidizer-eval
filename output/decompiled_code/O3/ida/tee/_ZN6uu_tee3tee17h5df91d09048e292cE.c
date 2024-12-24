__int64 __fastcall uu_tee::tee(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  char v3; // bp
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v17; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-98h]
  __int64 v19; // [rsp+18h] [rbp-90h]
  void *v20; // [rsp+20h] [rbp-88h]
  __int128 v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+40h] [rbp-68h]
  __int128 v23; // [rsp+50h] [rbp-58h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h]
  _QWORD v25[8]; // [rsp+68h] [rbp-40h] BYREF

  v1 = 0x2700000003LL;
  if ( !*(_BYTE *)(a1 + 25)
    || (v2 = 0x2700000003LL, (unsigned int)uucore::features::signals::ignore_interrupts() == 134) )
  {
    v3 = *(_BYTE *)(a1 + 26);
    if ( v3 != 4 || (v2 = 0x2700000003LL, (unsigned int)uucore::features::signals::enable_pipe_errors() == 134) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v25[0] = *(_QWORD *)(a1 + 8);
      v25[1] = v25[0] + 24 * v4;
      v25[2] = a1;
      core::iter::adapters::try_process(&v17, v25);
      v2 = *((_QWORD *)&v17 + 1);
      if ( (_QWORD)v17 != 0x8000000000000000LL )
      {
        v5 = v18;
        v23 = v17;
        v24 = v18;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aStandardOutput, 17LL);
        v22 = v18;
        v21 = v17;
        v6 = std::io::stdio::stdout();
        v19 = alloc::boxed::Box<T>::new(v6);
        v20 = &unk_120240;
        v17 = v21;
        v18 = v22;
        ((void (__fastcall *)(__int128 *, _QWORD, __int128 *, __int64, __int64, __int64))alloc::vec::Vec<T,A>::insert)(
          &v23,
          0LL,
          &v17,
          v7,
          v8,
          v9);
        v18 = v24;
        v17 = v23;
        LOBYTE(v20) = v3;
        v19 = 0LL;
        v11 = std::io::stdio::stdin(&v23, 0LL, v10);
        *(_QWORD *)&v21 = alloc::boxed::Box<T>::new(v11);
        *((_QWORD *)&v21 + 1) = &unk_120290;
        v12 = std::io::copy::generic_copy(&v21, &v17);
        if ( v12 )
        {
          v14 = v13;
          if ( v12 == 1 && (unsigned __int8)std::io::error::Error::kind(v13) != 39 )
          {
LABEL_16:
            v2 = v1;
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v14);
            core::ptr::drop_in_place<uu_tee::NamedReader>(v21, *((_QWORD *)&v21 + 1));
            core::ptr::drop_in_place<uu_tee::MultiWriter>(&v17);
            return v2;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v14);
        }
        if ( v5 == v4 )
        {
          v15 = <uu_tee::MultiWriter as std::io::Write>::flush(&v17);
          if ( v15 )
          {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v15);
          }
          else if ( !v19 )
          {
            v1 = 0LL;
          }
        }
        v14 = 0LL;
        goto LABEL_16;
      }
    }
  }
  return v2;
}
