__int64 __fastcall uu_split::n_chunks_by_line_round_robin(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // al
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebp
  unsigned __int64 v24; // r12
  __int64 *v25; // r13
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  char **v29; // rdi
  __int64 v30; // rax
  __int64 v32; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+8h] [rbp-A0h]
  __int64 v34; // [rsp+10h] [rbp-98h]
  __int64 v35; // [rsp+18h] [rbp-90h]
  unsigned __int64 v36; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-80h] BYREF
  __int64 v38; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+58h] [rbp-50h]
  __int64 v44; // [rsp+60h] [rbp-48h]
  __int64 v45; // [rsp+68h] [rbp-40h]
  __int64 v46; // [rsp+70h] [rbp-38h]

  v35 = a2;
  v32 = std::io::stdio::stdout();
  v37 = std::io::stdio::Stdout::lock(&v32);
  v38 = 0LL;
  v39 = 8LL;
  v40 = 0LL;
  v36 = a3;
  if ( a4 == 1 )
  {
    v11 = *(_BYTE *)(a1 + 162);
    if ( a3 )
    {
      v12 = a5 - 1;
      v13 = 0LL;
      v14 = v11;
      while ( 1 )
      {
        v32 = 0LL;
        v33 = 1LL;
        v34 = 0LL;
        if ( ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))std::io::BufRead::read_until)(
               v35,
               v14,
               &v32,
               v8,
               v9,
               v10) )
        {
          goto LABEL_28;
        }
        if ( !v15 )
          goto LABEL_34;
        if ( (v36 | v13) >> 32 )
        {
          if ( v13 % v36 != v12 )
            goto LABEL_11;
        }
        else if ( (unsigned int)v13 % (unsigned int)v36 != v12 )
        {
          goto LABEL_11;
        }
        v16 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v37, v33, v34);
        if ( v16 )
        {
          v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
          goto LABEL_29;
        }
LABEL_11:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v32);
        ++v13;
      }
    }
    v32 = 0LL;
    v33 = 1LL;
    v34 = 0LL;
    if ( !((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))std::io::BufRead::read_until)(
            v35,
            v11,
            &v32,
            v8,
            v9,
            v10) )
    {
      if ( v15 )
      {
        v29 = &off_1485D0;
        goto LABEL_38;
      }
LABEL_34:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v32);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v38);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v37);
      return 0LL;
    }
LABEL_28:
    v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
LABEL_29:
    v18 = v30;
LABEL_30:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v32);
    goto LABEL_31;
  }
  <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v32, a3, a1, *(unsigned __int8 *)(a1 + 161));
  v17 = v32;
  v18 = v33;
  v19 = v34;
  if ( v32 != 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v38);
    v38 = v17;
    v39 = v18;
    v40 = v19;
    v23 = *(unsigned __int8 *)(a1 + 162);
    if ( v36 )
    {
      v44 = a1;
      v43 = *(_QWORD *)(a1 + 136);
      v24 = 0LL;
      v25 = &v41;
      v26 = 0LL;
      while ( 1 )
      {
        v32 = 0LL;
        v33 = 1LL;
        v34 = 0LL;
        if ( ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))std::io::BufRead::read_until)(
               v35,
               v23,
               &v32,
               v20,
               v21,
               v22) )
        {
          break;
        }
        if ( !v15 )
          goto LABEL_34;
        v46 = v33;
        v45 = v34;
        if ( (v36 | v24) >> 32 )
          v27 = v24 % v36;
        else
          v27 = (unsigned int)v24 % (unsigned int)v36;
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v25, &v38, v27, v44);
        v28 = (__int64)v25;
        v18 = v41;
        if ( v41 )
          goto LABEL_30;
        v25 = (__int64 *)v28;
        uu_split::custom_write_all(v28, v46, v45, v42, v43);
        if ( (_BYTE)v41 )
        {
          v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
          goto LABEL_29;
        }
        v26 += BYTE1(v41) ^ 1LL;
        if ( v26 == v36 )
          goto LABEL_34;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v32);
        ++v24;
      }
    }
    else
    {
      v32 = 0LL;
      v33 = 1LL;
      v34 = 0LL;
      if ( !((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))std::io::BufRead::read_until)(
              v35,
              v23,
              &v32,
              v20,
              v21,
              v22) )
      {
        if ( v15 )
        {
          v29 = &off_1485B8;
LABEL_38:
          core::panicking::panic_const::panic_const_rem_by_zero(v29);
        }
        goto LABEL_34;
      }
    }
    goto LABEL_28;
  }
LABEL_31:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v38);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v37);
  return v18;
}
