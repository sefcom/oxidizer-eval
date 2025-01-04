__int64 __fastcall uu_tee::tee(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  char v3; // bp
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int128 v14; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  void *v17; // [rsp+20h] [rbp-88h]
  __int128 v18; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  _QWORD v22[8]; // [rsp+68h] [rbp-40h] BYREF

  v1 = 0x2700000003LL;
  if ( !*(_BYTE *)(a1 + 25)
    || (v2 = 0x2700000003LL, (unsigned int)uucore::features::signals::ignore_interrupts() == 134) )
  {
    v3 = *(_BYTE *)(a1 + 26);
    if ( v3 != 4 || (v2 = 0x2700000003LL, (unsigned int)uucore::features::signals::enable_pipe_errors() == 134) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v22[0] = *(_QWORD *)(a1 + 8);
      v22[1] = v22[0] + 24 * v4;
      v22[2] = a1;
      core::iter::adapters::try_process(&v14, v22);
      v2 = *((_QWORD *)&v14 + 1);
      if ( (_QWORD)v14 != 0x8000000000000000LL )
      {
        v5 = v15;
        v20 = v14;
        v21 = v15;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v14, aStandardOutput, 17LL);
        v19 = v15;
        v18 = v14;
        v6 = std::io::stdio::stdout();
        v16 = alloc::boxed::Box<T>::new(v6);
        v17 = &unk_11F900;
        v14 = v18;
        v15 = v19;
        ((void (__fastcall *)(__int128 *, _QWORD, __int128 *))alloc::vec::Vec<T,A>::insert)(&v20, 0LL, &v14);
        v15 = v21;
        v14 = v20;
        LOBYTE(v17) = v3;
        v16 = 0LL;
        v8 = std::io::stdio::stdin(&v20, 0LL, v7);
        *(_QWORD *)&v18 = alloc::boxed::Box<T>::new(v8);
        *((_QWORD *)&v18 + 1) = &unk_11F950;
        v9 = std::io::copy::generic_copy(&v18, &v14);
        if ( v9 )
        {
          v11 = v10;
          if ( v9 == 1 && (unsigned __int8)std::io::error::Error::kind() != 39 )
          {
LABEL_16:
            v2 = v1;
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v11);
            core::ptr::drop_in_place<uu_tee::NamedReader>(v18, *((_QWORD *)&v18 + 1));
            core::ptr::drop_in_place<uu_tee::MultiWriter>(&v14);
            return v2;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v11);
        }
        if ( v5 == v4 )
        {
          v12 = <uu_tee::MultiWriter as std::io::Write>::flush(&v14);
          if ( v12 )
          {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v12);
          }
          else if ( !v16 )
          {
            v1 = 0LL;
          }
        }
        v11 = 0LL;
        goto LABEL_16;
      }
    }
  }
  return v2;
}
