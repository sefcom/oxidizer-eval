char __fastcall fd::exec::command::execute_commands(__int128 *a1, __int64 a2, int a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r15
  __int16 v9; // bx
  __int64 v11; // rbx
  char v12; // [rsp+4h] [rbp-2F4h]
  _QWORD v13[4]; // [rsp+10h] [rbp-2E8h] BYREF
  __m256i v14; // [rsp+30h] [rbp-2C8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-298h]
  __int128 v17; // [rsp+68h] [rbp-290h]
  __int64 v18; // [rsp+78h] [rbp-280h]
  int v19; // [rsp+80h] [rbp-278h]
  __int128 v20; // [rsp+88h] [rbp-270h] BYREF
  __int64 v21; // [rsp+98h] [rbp-260h]
  _OWORD v22[2]; // [rsp+A0h] [rbp-258h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-238h]
  _BYTE v24[28]; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-200h] BYREF
  __int64 v26; // [rsp+100h] [rbp-1F8h]
  _BYTE dest[216]; // [rsp+108h] [rbp-1F0h] BYREF
  __int64 v28; // [rsp+1E0h] [rbp-118h] BYREF
  __int64 v29; // [rsp+1E8h] [rbp-110h]
  _BYTE src[216]; // [rsp+1F0h] [rbp-108h] BYREF

  v13[3] = a2;
  v13[0] = 0LL;
  v13[1] = 8LL;
  v13[2] = 0LL;
  v23 = *((_QWORD *)a1 + 4);
  v3 = *a1;
  v22[1] = a1[1];
  v22[0] = v3;
  v12 = a3;
  if ( !a3 )
  {
    while ( 1 )
    {
      <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v28, v22);
      if ( v28 == 0x8000000000000001LL )
        goto LABEL_13;
      v4 = v29;
      if ( v28 == 0x8000000000000000LL )
        break;
      v25 = v28;
      v26 = v29;
      memcpy(dest, src, sizeof(dest));
      argmax::Command::spawn(&v14, &v25);
      if ( v14.m256i_i32[0] == 1 )
      {
        *((_QWORD *)&v15 + 1) = v14.m256i_i64[1];
LABEL_18:
        v11 = *((_QWORD *)&v15 + 1);
        v14.m256i_i64[0] = *((_QWORD *)&v15 + 1);
        fd::exec::command::OutputBuffer::write(v13);
        fd::exec::command::handle_cmd_error(&v25, v11);
LABEL_19:
        core::ptr::drop_in_place<argmax::Command>(&v25);
        return 4;
      }
      *(_OWORD *)&v24[12] = *(_OWORD *)&v14.m256i_u64[2];
      *(_OWORD *)v24 = *(_OWORD *)((char *)v14.m256i_i64 + 4);
      std::process::Child::wait_with_output(&v15, v24);
      v5 = v15;
      if ( (_QWORD)v15 == 0x8000000000000000LL )
        goto LABEL_18;
      v6 = *((_QWORD *)&v15 + 1);
      v8 = *((_QWORD *)&v17 + 1);
      v7 = v17;
      if ( (v19 & 0xFF7F) != 0 )
      {
LABEL_15:
        fd::exec::command::OutputBuffer::write(v13);
        if ( !v12 )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, v8);
        }
        goto LABEL_19;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, *((_QWORD *)&v15 + 1));
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, v8);
      core::ptr::drop_in_place<argmax::Command>(&v25);
    }
LABEL_14:
    fd::exec::command::handle_cmd_error(0LL, v4);
    core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(v13);
    return 4;
  }
  while ( 1 )
  {
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v28, v22);
    if ( v28 == 0x8000000000000001LL )
      break;
    v4 = v29;
    if ( v28 == 0x8000000000000000LL )
      goto LABEL_14;
    v25 = v28;
    v26 = v29;
    memcpy(dest, src, sizeof(dest));
    argmax::Command::output(&v15, &v25);
    v5 = v15;
    if ( (_QWORD)v15 == 0x8000000000000000LL )
      goto LABEL_18;
    v6 = *((_QWORD *)&v15 + 1);
    v8 = *((_QWORD *)&v17 + 1);
    v7 = v17;
    v9 = v19;
    v20 = v15;
    v21 = v16;
    *(_OWORD *)v14.m256i_i8 = v17;
    v14.m256i_i64[2] = v18;
    fd::exec::command::OutputBuffer::push((__int64)v13, &v20, (__int128 *)v14.m256i_i8);
    if ( (v9 & 0xFF7F) != 0 )
      goto LABEL_15;
    core::ptr::drop_in_place<argmax::Command>(&v25);
  }
LABEL_13:
  fd::exec::command::OutputBuffer::write(v13);
  return 2;
}