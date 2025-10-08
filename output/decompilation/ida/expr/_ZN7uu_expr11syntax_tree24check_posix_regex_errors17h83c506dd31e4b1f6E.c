__int64 __fastcall uu_expr::syntax_tree::check_posix_regex_errors(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int8 code_point; // al
  int v5; // edx
  int v6; // r14d
  char v7; // bp
  __int64 v8; // r15
  bool v9; // cf
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 end; // r13
  __int64 v21; // rdx
  int v22; // eax
  char v23; // al
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // bl
  __int64 v28; // rdi
  __int64 v29; // rsi
  char v30; // al
  bool v31; // bl
  int v32; // edx
  int v33; // ebx
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rdx
  int v39; // [rsp+8h] [rbp-D0h]
  __int64 v40; // [rsp+10h] [rbp-C8h]
  __int64 v41; // [rsp+18h] [rbp-C0h]
  _QWORD v42[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+40h] [rbp-98h]
  __int64 *v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+50h] [rbp-88h]
  __int64 v48; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp-78h] BYREF
  char v50[48]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v51; // [rsp+A0h] [rbp-38h]

  v3 = a1;
  v43 = 0LL;
  v44 = 1LL;
  v45 = 0LL;
  v42[0] = a2;
  v42[1] = a2 + a3;
  code_point = core::str::validations::next_code_point(v42);
  if ( (code_point & (v5 != 1114112)) != 1 )
  {
LABEL_49:
    *v3 = 13LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v43);
  }
  v6 = v5;
  v46 = a1;
  v7 = 0;
  v39 = 0;
  v41 = 0LL;
  v8 = 0LL;
  do
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_17;
    if ( v6 > 122 )
    {
      if ( v6 == 123 )
      {
        ++v8;
        goto LABEL_39;
      }
      if ( v6 == 125 )
      {
        v48 = 11LL;
        v9 = v8 == 0;
        v10 = v8 - 1;
        if ( !v9 )
        {
          v47 = v10;
          core::ptr::drop_in_place<uu_expr::ExprError>(&v48);
          v11 = v44;
          v12 = v45;
          v13 = v45 - 1;
          v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                  v45 - 1,
                  v44,
                  v45);
          if ( !v14 )
            core::str::slice_error_fail(v11, v12, 0LL, v13, &off_14A870);
          v16 = v15;
          <char as core::str::pattern::Pattern>::into_searcher(v50, v14);
          v49[0] = 0LL;
          v49[1] = v16;
          v51 = 1;
          v48 = 1LL;
          v18 = core::str::iter::SplitInternal<P>::next(v49);
          if ( !v18 )
            core::option::expect_failed(aSplitnAlwaysRe, 41LL, &off_14A888);
          v19 = v17;
          if ( !v48 )
          {
            v23 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v17, 1LL, 0LL);
            LOBYTE(v24) = 1;
            if ( v23 )
              goto LABEL_38;
            goto LABEL_35;
          }
          if ( v48 == 1 )
          {
            v48 = 0LL;
            end = core::str::iter::SplitInternal<P>::get_end(v49);
            v40 = v21;
          }
          else
          {
            --v48;
            v25 = core::str::iter::SplitInternal<P>::next(v49);
            v40 = v26;
            end = v25;
          }
          v27 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, 1LL, 0LL);
          if ( v27 )
          {
            if ( !end )
            {
              LOBYTE(v24) = 1;
LABEL_38:
              v45 = 0LL;
              v39 = v24;
              v8 = v47;
              goto LABEL_39;
            }
LABEL_34:
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(end, v40, 1LL, 0LL) )
            {
LABEL_35:
              v28 = v18;
              v29 = v19;
            }
            else
            {
              if ( !v27 )
              {
                v33 = core::num::<impl i16>::from_ascii_radix(v18, v19);
                v34 = core::num::<impl i16>::from_ascii_radix(end, v40);
                LOBYTE(v24) = 1;
                if ( (v33 & 1) == 0 && (v34 & 1) == 0 )
                {
                  v24 = v39;
                  LOBYTE(v24) = (SHIWORD(v33) > SWORD1(v34)) | v39 & 1;
                }
                goto LABEL_38;
              }
              v28 = end;
              v29 = v40;
            }
            v30 = core::num::<impl i16>::from_ascii_radix(v28, v29);
            v24 = (unsigned __int8)v39;
            if ( (v30 & 1) != 0 )
              v24 = 1;
            goto LABEL_38;
          }
          if ( end )
            goto LABEL_34;
          goto LABEL_35;
        }
        v36 = v49[0];
        v37 = 11LL;
LABEL_57:
        v38 = v46;
        *v46 = v37;
        v38[1] = v36;
        return core::ptr::drop_in_place<alloc::string::String>(&v43);
      }
LABEL_17:
      if ( v8 )
      {
        if ( v45 <= 0xD )
          alloc::string::String::push(&v43, (unsigned int)v6);
        v22 = v6 - 48;
        if ( (unsigned int)(v6 - 48) >= 0xA && v6 != 44 && v6 != 92 )
        {
          LOBYTE(v22) = 1;
          v39 = v22;
        }
      }
      else
      {
        v8 = 0LL;
      }
      goto LABEL_39;
    }
    if ( v6 == 40 )
    {
      ++v41;
      goto LABEL_39;
    }
    if ( v6 != 41 )
      goto LABEL_17;
    v48 = 9LL;
    if ( !v41 )
    {
      v36 = v49[0];
      v37 = 9LL;
      goto LABEL_57;
    }
    --v41;
    core::ptr::drop_in_place<uu_expr::ExprError>(&v48);
LABEL_39:
    v31 = v6 == 92;
    if ( (core::str::validations::next_code_point(v42) & 1) == 0 )
      break;
    v6 = v32;
    v7 = v31 & ~v7;
  }
  while ( v32 != 1114112 );
  v3 = v46;
  if ( !(v8 | v41) && (v39 & 1) == 0 )
    goto LABEL_49;
  if ( v8 )
  {
    *v46 = 10LL;
  }
  else if ( v41 )
  {
    *v46 = 8LL;
  }
  else
  {
    *v46 = 12LL;
  }
  return core::ptr::drop_in_place<alloc::string::String>(&v43);
}