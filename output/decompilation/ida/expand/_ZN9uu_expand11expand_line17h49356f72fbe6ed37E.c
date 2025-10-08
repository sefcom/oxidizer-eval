__int64 __fastcall uu_expand::expand_line(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // r15
  char v9; // si
  _BOOL8 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // edx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  char **v23; // r8
  const void *v24; // rax
  size_t v25; // rdx
  size_t v26; // r12
  __int64 v27; // rbx
  unsigned __int64 tabstop; // rax
  void *v29; // rsi
  size_t v30; // r12
  __int64 v31; // rbx
  void *v32; // rbp
  const void *v33; // rax
  size_t v34; // rdx
  size_t v35; // r12
  __int64 v36; // rbx
  __int64 v37; // r12
  unsigned int v38; // edx
  unsigned __int64 v39; // rdx
  __int64 result; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int8 v43; // [rsp+Dh] [rbp-ABh]
  char v44; // [rsp+Eh] [rbp-AAh]
  char v45; // [rsp+Fh] [rbp-A9h]
  unsigned __int64 v46; // [rsp+10h] [rbp-A8h]
  int v47; // [rsp+1Ch] [rbp-9Ch]
  unsigned __int64 v48; // [rsp+20h] [rbp-98h]
  __int64 v49; // [rsp+28h] [rbp-90h]
  __int64 v50; // [rsp+30h] [rbp-88h]
  __int64 v52; // [rsp+40h] [rbp-78h] BYREF
  void *src; // [rsp+48h] [rbp-70h]
  size_t n; // [rsp+50h] [rbp-68h]
  __int64 v55; // [rsp+58h] [rbp-60h]
  unsigned __int64 v56; // [rsp+60h] [rbp-58h]
  unsigned __int64 *v57; // [rsp+68h] [rbp-50h]
  __int64 v58; // [rsp+70h] [rbp-48h]
  _QWORD v59[8]; // [rsp+78h] [rbp-40h] BYREF

  v58 = a4;
  v57 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v45 = *(_BYTE *)(a5 + 73);
    v49 = *(_QWORD *)(a1 + 8);
    v44 = *(_BYTE *)(a5 + 74);
    v7 = *(unsigned __int8 *)(a5 + 72);
    v55 = *(_QWORD *)(a5 + 56);
    v56 = *(_QWORD *)(a5 + 64);
    v43 = v7 ^ 1;
    LOBYTE(v7) = 1;
    v47 = v7;
    v48 = 0LL;
    v8 = 0LL;
    v46 = v6;
    while ( 1 )
    {
      v9 = *(_BYTE *)(v49 + v8);
      if ( !v45 )
        break;
      v10 = v9 < 0;
      v11 = v10 + v8 + 1;
      v12 = 1LL;
      if ( v11 > v6 )
      {
        v13 = 1LL;
        goto LABEL_14;
      }
      v15 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v11, v49, v6, &off_E8A70);
      core::str::converts::from_utf8(&v52, v15, v16, v17);
      if ( (_DWORD)v52 == 1 )
      {
        v13 = 1LL;
        v6 = v46;
        goto LABEL_14;
      }
      v37 = v10 + 1;
      v59[0] = src;
      v59[1] = (char *)src + n;
      if ( (core::str::validations::next_code_point(v59) & 1) == 0 )
        v38 = 1114112;
      if ( v38 == 8 )
      {
        v18 = 0;
        v13 = 0LL;
        v6 = v46;
        v12 = v37;
      }
      else
      {
        v6 = v46;
        if ( v38 == 9 )
        {
          v18 = 1;
          v13 = 0LL;
          v12 = v37;
        }
        else
        {
          v13 = 1LL;
          v18 = 2;
          if ( v38 == 1114112 )
            goto LABEL_11;
          if ( v38 >= 0x7F )
          {
            if ( v38 < 0xA0 )
            {
              v13 = 0LL;
            }
            else
            {
              LOBYTE(v13) = unicode_width::tables::lookup_width(v38);
              v6 = v46;
              v13 = (unsigned __int8)v13;
            }
            v12 = v37;
          }
          else
          {
            v13 = v38 >= 0x20;
            v12 = v37;
          }
        }
      }
LABEL_12:
      if ( v18 != 1 )
      {
        if ( v18 == 2 )
        {
LABEL_14:
          v48 += v13;
        }
        else
        {
          v39 = v48 - 1;
          if ( !v48 )
            v39 = 0LL;
          v48 = v39;
        }
        v19 = v47;
        LOBYTE(v19) = (*(_BYTE *)(v49 + v8) == 32) & v47;
        v47 = v19;
        v20 = v8 + v12;
        v21 = v8;
        v22 = v49;
        v23 = &off_E8AB8;
        goto LABEL_16;
      }
LABEL_18:
      tabstop = uu_expand::next_tabstop(v57, v58, v48, v44);
      v48 += tabstop;
      if ( ((v43 | (unsigned __int8)v47) & 1) == 0 )
      {
        v33 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                              v8,
                              v8 + v12,
                              v49,
                              v46,
                              &off_E8A88);
        v35 = v34;
        v36 = a2[2];
        if ( v34 >= *a2 - v36 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v33, v34);
          if ( result )
            return result;
        }
        else
        {
          memcpy((void *)(v36 + a2[1]), v33, v34);
          a2[2] = v36 + v35;
        }
        v47 = 0;
        goto LABEL_26;
      }
      v6 = v56;
      if ( tabstop > v56 )
      {
        alloc::slice::<impl [T]>::repeat(&v52, tabstop);
        v50 = v52;
        v29 = src;
        v30 = n;
        v31 = a2[2];
        if ( n >= *a2 - v31 )
        {
          v32 = src;
          v41 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, src, n);
          if ( v41 )
          {
            v42 = v41;
            core::ptr::drop_in_place<alloc::string::String>(v50, v29);
            return v42;
          }
        }
        else
        {
          v32 = src;
          memcpy((void *)(v31 + a2[1]), src, n);
          a2[2] = v30 + v31;
        }
        core::ptr::drop_in_place<alloc::string::String>(v50, v32);
        goto LABEL_26;
      }
      v21 = 0LL;
      v20 = tabstop;
      v22 = v55;
      v23 = &off_E8AA0;
LABEL_16:
      v24 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                            v21,
                            v20,
                            v22,
                            v6,
                            v23);
      v26 = v25;
      v27 = a2[2];
      if ( v25 < *a2 - v27 )
      {
        memcpy((void *)(v27 + a2[1]), v24, v25);
        a2[2] = v27 + v26;
LABEL_26:
        v6 = v46;
        goto LABEL_27;
      }
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v24, v25);
      v6 = v46;
      if ( result )
        return result;
LABEL_27:
      v8 += v12;
      if ( v8 >= v6 )
        goto LABEL_52;
    }
    v14 = 0;
    v13 = 1LL;
    if ( v9 == 9 )
    {
      v12 = 1LL;
      goto LABEL_18;
    }
    LOBYTE(v14) = v9 != 8;
    v18 = 2 * v14;
LABEL_11:
    v12 = 1LL;
    goto LABEL_12;
  }
LABEL_52:
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
  if ( !result )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return 0LL;
  }
  return result;
}