void *__fastcall uu_fold::fold_file(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v3)(); // r13
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  void *v8; // r12
  int code_point; // eax
  unsigned int v11; // edx
  unsigned int v12; // ebp
  __int64 (__fastcall *v13)(); // r12
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(); // rsi
  __int64 (__fastcall *v16)(); // r13
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(); // r12
  __int64 v20; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-D8h]
  __int64 (__fastcall *v22)(); // [rsp+18h] [rbp-D0h]
  __int64 *v23; // [rsp+20h] [rbp-C8h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+28h] [rbp-C0h]
  __int64 **v25; // [rsp+30h] [rbp-B8h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+38h] [rbp-B0h]
  void *v27; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-A0h]
  __int64 **v29; // [rsp+50h] [rbp-98h]
  __int64 v30; // [rsp+58h] [rbp-90h]
  __int64 v31; // [rsp+60h] [rbp-88h]
  char **v32; // [rsp+70h] [rbp-78h]
  _QWORD *v33; // [rsp+78h] [rbp-70h]
  unsigned int v34; // [rsp+84h] [rbp-64h]
  __int64 v35; // [rsp+88h] [rbp-60h] BYREF
  __int64 v36; // [rsp+90h] [rbp-58h]
  __int64 v37; // [rsp+98h] [rbp-50h]
  __int64 v38; // [rsp+A0h] [rbp-48h]
  _QWORD v39[8]; // [rsp+A8h] [rbp-40h] BYREF

  v33 = a1;
  v35 = 0LL;
  v36 = 1LL;
  v37 = 0LL;
  v20 = 0LL;
  v21 = 1LL;
  v22 = 0LL;
  v34 = a2;
  v38 = a2;
  v5 = 0LL;
  v32 = &off_11BC78;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = std::io::append_to_string(&v35, v33);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v27,
      v7);
    v8 = v27;
    if ( v27 || !v28 )
      break;
    v39[0] = v36;
    v39[1] = v36 + v37;
    while ( 1 )
    {
      code_point = core::str::validations::next_code_point(v39);
      v12 = v11;
      if ( !code_point )
        v12 = 1114112;
      if ( v12 == 10 )
        break;
      if ( v12 == 1114112 )
      {
        if ( !v22 )
          goto LABEL_2;
        goto LABEL_47;
      }
      if ( v6 >= a3 )
      {
        v13 = (__int64 (__fastcall *)())((char *)v3 + 1);
        v14 = v21;
        v15 = v22;
        if ( !v5 )
          v13 = v22;
        if ( v13 )
        {
          if ( (unsigned __int64)v13 >= (unsigned __int64)v22 )
          {
            if ( v13 != v22 )
              goto LABEL_50;
          }
          else if ( *((char *)v13 + v21) <= -65 )
          {
            goto LABEL_50;
          }
        }
        v23 = (__int64 *)v21;
        v24 = v13;
        v25 = &v23;
        v26 = <&T as core::fmt::Display>::fmt;
        v27 = &unk_11BC58;
        v28 = 2LL;
        v31 = 0LL;
        v29 = (__int64 **)&v25;
        v30 = 1LL;
        std::io::stdio::_print(&v27);
        alloc::string::String::replace_range(&v20, v13, 1LL, 0LL);
        v6 = (unsigned __int64)v22;
        v5 = 0LL;
      }
      switch ( v12 )
      {
        case 8u:
          if ( v6-- == 0 )
            v6 = 0LL;
          break;
        case 9u:
          v6 = (v6 & 0xFFFFFFFFFFFFFFF8LL) + 8;
          v15 = v22;
          if ( v6 > a3 && v22 )
          {
            v16 = (__int64 (__fastcall *)())((char *)v3 + 1);
            if ( !v5 )
              v16 = v22;
            v14 = v21;
            if ( v16 )
            {
              if ( (unsigned __int64)v16 >= (unsigned __int64)v22 )
              {
                if ( v16 != v22 )
                {
LABEL_49:
                  v13 = v16;
                  v32 = &off_11BC90;
LABEL_50:
                  core::str::slice_error_fail(v14, v15, 0LL, v13, v32);
                }
              }
              else if ( *((char *)v16 + v21) <= -65 )
              {
                goto LABEL_49;
              }
            }
            v23 = (__int64 *)v21;
            v24 = v16;
            v25 = &v23;
            v26 = <&T as core::fmt::Display>::fmt;
            v27 = &unk_11BC58;
            v28 = 2LL;
            v31 = 0LL;
            v29 = (__int64 **)&v25;
            v30 = 1LL;
            std::io::stdio::_print(&v27);
            alloc::string::String::replace_range(&v20, v16, 1LL, 0LL);
            v15 = v22;
          }
          v3 = v15;
          v5 = v38;
          break;
        case 0xDu:
          v6 = 0LL;
          break;
        default:
          if ( (_BYTE)v34
            && (v12 <= 0x20 && (v17 = 0x100003800LL, _bittest64(&v17, v12))
             || v12 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v12)) )
          {
            v3 = v22;
            ++v6;
            v5 = 1LL;
          }
          else
          {
            ++v6;
          }
          break;
      }
      alloc::string::String::push(&v20, v12);
    }
    v18 = v22;
    v23 = (__int64 *)v21;
    v24 = v22;
    v25 = &v23;
    v26 = <&T as core::fmt::Display>::fmt;
    v27 = &unk_11BC58;
    v28 = 2LL;
    v31 = 0LL;
    v29 = (__int64 **)&v25;
    v30 = 1LL;
    std::io::stdio::_print(&v27);
    alloc::string::String::replace_range(&v20, v18, 1LL, 0LL);
    v5 = 0LL;
    v6 = (unsigned __int64)v22;
    if ( !v22 )
      goto LABEL_2;
LABEL_47:
    v23 = &v20;
    v24 = <alloc::string::String as core::fmt::Display>::fmt;
    v27 = &unk_14850;
    v28 = 1LL;
    v31 = 0LL;
    v29 = &v23;
    v30 = 1LL;
    std::io::stdio::_print(&v27);
    alloc::string::String::truncate(&v20);
LABEL_2:
    alloc::string::String::truncate(&v35);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  core::ptr::drop_in_place<alloc::string::String>(&v35);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(*v33, v33[1]);
  return v8;
}
