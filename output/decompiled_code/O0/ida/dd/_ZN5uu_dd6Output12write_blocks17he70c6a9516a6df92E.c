__int64 *__fastcall uu_dd::Output::write_blocks(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  bool v27; // cf
  __int64 v28; // rax
  __int64 *result; // rax
  __int64 v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+8h] [rbp-C0h]
  __int64 v32; // [rsp+10h] [rbp-B8h]
  __int64 v33; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+38h] [rbp-90h]
  unsigned __int64 v35; // [rsp+40h] [rbp-88h]
  unsigned __int64 v36; // [rsp+48h] [rbp-80h]
  __int64 v38; // [rsp+60h] [rbp-68h]
  char **v39; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v41; // [rsp+80h] [rbp-48h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 120LL);
  if ( !v4 )
  {
    v39 = &anon_f1dd4ebaf33a3c0c2dfbf6f24dd0ff60_5_llvm_10667409745923771447;
    v40[0] = 1LL;
    v40[1] = 8LL;
    v41 = 0LL;
    core::panicking::panic_fmt(&v39, &off_143E48);
  }
  v5 = a4;
  v6 = a1;
  if ( a4 )
  {
    v8 = a2;
    v33 = a2 + 4;
    v38 = a2 + 8;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v34 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 120LL);
    while ( 2 )
    {
      v30 = v11;
      v31 = v10;
      v32 = v9;
      v12 = v4;
      if ( v5 < v4 )
        v12 = v5;
      core::slice::raw::from_raw_parts::precondition_check(a3, 1LL, 1LL, v12);
      v13 = v5 - v12;
      v14 = 1LL;
      core::slice::raw::from_raw_parts::precondition_check(a3 + v12, 1LL, 1LL, v13);
      if ( a3 )
      {
        v35 = v13;
        v16 = 0LL;
        while ( 2 )
        {
          v17 = v12 - v16;
          v36 = v16;
          v18 = a3 + v16;
          switch ( *(_BYTE *)v8 )
          {
            case 0:
LABEL_9:
              v14 = v18;
              v19 = <std::io::stdio::Stdout as std::io::Write>::write(v38, v18, v17);
              goto LABEL_10;
            case 1:
LABEL_15:
              v23 = v36;
              if ( (*(_BYTE *)(v8 + 1) & 1) != 0 )
                goto LABEL_28;
              break;
            case 2:
              goto LABEL_28;
            case 3:
              goto LABEL_29;
          }
          do
          {
            if ( v12 == v23 )
            {
              if ( v17 < 0 )
                core::result::unwrap_failed(
                  aInternalDdErro,
                  65LL,
                  &v39,
                  &anon_63782909c3cb7357905e62e141098beb_7_llvm_18118160920441741807,
                  &off_143E18);
              v14 = 2LL;
              if ( <std::fs::File as std::io::Seek>::seek(v33, 2LL, v17) )
              {
                v20 = v15;
                v21 = 16LL;
                switch ( v15 & 3 )
                {
                  case 0LL:
                    goto LABEL_13;
                  case 1LL:
                    goto LABEL_12;
                  case 2LL:
                    goto LABEL_22;
                  case 3LL:
                    goto LABEL_23;
                }
              }
              goto LABEL_29;
            }
          }
          while ( *(_BYTE *)(a3 + v23++) == 0 );
LABEL_28:
          while ( 2 )
          {
            v14 = v18;
            v19 = <std::os::unix::net::stream::UnixStream as std::io::Write>::write(v33, v18, v17);
LABEL_10:
            v20 = v15;
            if ( v19 )
            {
              v21 = 16LL;
              switch ( v15 & 3 )
              {
                case 0LL:
                  goto LABEL_13;
                case 1LL:
LABEL_12:
                  v21 = 15LL;
LABEL_13:
                  v22 = *(_BYTE *)(v20 + v21);
                  break;
                case 2LL:
LABEL_22:
                  v22 = std::sys::pal::unix::decode_error_kind(HIDWORD(v20));
                  break;
                case 3LL:
LABEL_23:
                  v22 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v20));
                  if ( v22 == 41 )
                    core::hint::unreachable_unchecked::precondition_check();
                  return result;
              }
              if ( v22 == 35 )
              {
                v14 = v20;
                std::io::error::repr_bitpacked::decode_repr(&v39, v20);
                if ( (unsigned __int8)v39 >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v40);
                v8 = a2;
                switch ( *(_BYTE *)a2 )
                {
                  case 0:
                    goto LABEL_9;
                  case 1:
                    goto LABEL_15;
                  case 2:
                    continue;
                  case 3:
                    goto LABEL_29;
                }
              }
              v6 = a1;
              a1[1] = v20;
              v28 = 1LL;
              goto LABEL_42;
            }
            break;
          }
          v17 = v15;
          v8 = a2;
LABEL_29:
          v16 = v17 + v36;
          if ( __CFADD__(v17, v36) )
            core::panicking::panic_const::panic_const_add_overflow(&off_143E30, v14, v15, v16);
          if ( v16 < v12 && (*(_BYTE *)(*(_QWORD *)(v8 + 16) + 77LL) & 1) != 0 )
            continue;
          break;
        }
        v25 = v17 + v36;
        if ( v16 >= *(_QWORD *)(*(_QWORD *)(v8 + 16) + 120LL) )
        {
          v9 = v32 + 1;
          v6 = a1;
          v5 = v35;
          v4 = v34;
          v10 = v31;
          v26 = v30;
          if ( v32 == -1 )
            core::panicking::panic_const::panic_const_add_overflow(&off_143E60, v25, v30, v31);
        }
        else
        {
          v10 = v31 + 1;
          v6 = a1;
          v5 = v35;
          v4 = v34;
          v9 = v32;
          v26 = v30;
          if ( v31 == -1 )
            core::panicking::panic_const::panic_const_add_overflow(&off_143E78, v25, v30, v10);
        }
        v27 = __CFADD__(v25, v26);
        v11 = v25 + v26;
        if ( v27 )
          core::panicking::panic_const::panic_const_add_overflow(&off_143E90, v25, v11, v10);
        a3 += v12;
        if ( v5 )
          continue;
      }
      else
      {
        v9 = v32;
        v10 = v31;
        v11 = v30;
      }
      break;
    }
  }
  else
  {
    v11 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
  }
  v6[2] = v11;
  v6[3] = 0LL;
  v6[4] = v9;
  v6[5] = v10;
  v28 = 0LL;
LABEL_42:
  *v6 = v28;
  return v6;
}
