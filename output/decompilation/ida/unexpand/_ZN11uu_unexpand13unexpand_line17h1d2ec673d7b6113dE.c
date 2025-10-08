__int64 __fastcall uu_unexpand::unexpand_line(
        __int64 a1,
        _QWORD *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  char v14; // r13
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  char v18; // bp
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 result; // rax
  unsigned __int64 v23; // r11
  char tabstop; // al
  unsigned __int64 v25; // r14
  const void *v26; // rax
  size_t v27; // rdx
  size_t v28; // rbx
  __int64 v29; // r15
  size_t v30; // rbx
  unsigned __int64 v31; // rcx
  const void *v32; // rax
  size_t v33; // rdx
  size_t v34; // rbx
  __int64 v35; // r15
  __int64 v36; // rax
  const void *v37; // rsi
  size_t v38; // r15
  __int64 v39; // rbx
  char v40; // al
  unsigned __int64 v41; // rcx
  char v42; // [rsp+4h] [rbp-94h]
  unsigned __int64 v43; // [rsp+8h] [rbp-90h]
  unsigned __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  _QWORD *v46; // [rsp+18h] [rbp-80h]
  unsigned __int64 v47; // [rsp+20h] [rbp-78h]
  unsigned __int64 v48; // [rsp+28h] [rbp-70h]
  unsigned __int8 v49; // [rsp+38h] [rbp-60h]
  int v50; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int8 v51; // [rsp+40h] [rbp-58h]
  unsigned __int64 v52; // [rsp+48h] [rbp-50h]
  __int64 v53; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v54; // [rsp+58h] [rbp-40h]
  __int64 v55; // [rsp+60h] [rbp-38h]

  v10 = a1;
  v11 = a7;
  v48 = *(_QWORD *)(a1 + 16);
  if ( v48 )
  {
    v46 = a6;
    v12 = a5 - 1;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = 3;
    v42 = 1;
    v15 = 0LL;
    v50 = a4;
    v49 = a3;
    v51 = a3;
    v16 = 0LL;
    v47 = 0LL;
    v17 = *(_QWORD *)(a1 + 16);
    v45 = v13;
    v52 = v12;
    while ( 2 )
    {
      v18 = v14;
      v43 = v15;
      if ( v12 < v15 )
      {
        result = uu_unexpand::write_tabs(a2, v46, a7, v47, v15, v14 == 2, v42, 1u);
        if ( result )
          return result;
        v37 = (const void *)(v16 + v45);
        v38 = v17 - v16;
        v39 = a2[2];
        if ( v38 >= *a2 - v39 )
        {
          v36 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v37, v38);
          if ( v36 )
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
          v15 = v43;
          v41 = v43;
          v10 = a1;
        }
        else
        {
          memcpy((void *)(v39 + a2[1]), v37, v38);
          a2[2] = v38 + v39;
          v15 = v43;
          v41 = v43;
          v10 = a1;
        }
        a6 = v46;
        v11 = a7;
        v40 = v42;
      }
      else
      {
        uu_unexpand::next_char_info((__int64)&v53, v50, v13, v17, v16);
        v14 = v54;
        v19 = v54;
        v20 = v55;
        switch ( v54 )
        {
          case 0u:
          case 3u:
            v21 = v53;
            result = uu_unexpand::write_tabs(a2, v46, a7, v47, v43, v18 == 2, v42, v51);
            if ( !result )
            {
              if ( v14 == 3 )
              {
                v44 = v21 + v43;
              }
              else
              {
                v31 = v43 - 1;
                if ( !v43 )
                  v31 = 0LL;
                v44 = v31;
              }
              v25 = v16 + v20;
              v32 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                    v16,
                                    v25,
                                    v45,
                                    v48,
                                    &off_E8370);
              v34 = v33;
              v35 = a2[2];
              if ( v33 < *a2 - v35 )
              {
                memcpy((void *)(v35 + a2[1]), v32, v33);
                v30 = v35 + v34;
                v42 = 0;
                goto LABEL_19;
              }
              v36 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v32, v33);
              if ( !v36 )
              {
                v42 = 0;
                goto LABEL_20;
              }
              return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
            }
            return result;
          case 1u:
            v23 = v43;
            goto LABEL_11;
          case 2u:
            tabstop = uu_unexpand::next_tabstop(v46, a7, v43);
            v23 = v43;
            if ( (tabstop & 1) == 0 )
              v19 = 1LL;
LABEL_11:
            v15 = v19 + v23;
            v25 = v16 + v20;
            if ( ((v49 | (unsigned __int8)v42) & 1) != 0 )
              goto LABEL_21;
            v44 = v15;
            v26 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                  v16,
                                  v25,
                                  v45,
                                  v17,
                                  &off_E8358);
            v28 = v27;
            v29 = a2[2];
            if ( v27 >= *a2 - v29 )
            {
              v36 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v26, v27);
              v15 = v44;
              v47 = v44;
              v17 = v48;
              v13 = v45;
              if ( v36 )
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
            }
            else
            {
              memcpy((void *)(v29 + a2[1]), v26, v27);
              v30 = v29 + v28;
LABEL_19:
              a2[2] = v30;
LABEL_20:
              v15 = v44;
              v47 = v44;
              v17 = v48;
LABEL_21:
              v13 = v45;
            }
            v16 = v25;
            v12 = v52;
            if ( v25 < v17 )
              continue;
            v10 = a1;
            a6 = v46;
            v11 = a7;
            v40 = v42;
            v41 = v47;
            break;
        }
      }
      break;
    }
  }
  else
  {
    v14 = 3;
    v40 = 1;
    v15 = 0LL;
    v41 = 0LL;
  }
  result = uu_unexpand::write_tabs(a2, a6, v11, v41, v15, v14 == 2, v40 & 1, 1u);
  if ( !result )
  {
    v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
    if ( v36 )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
    *(_QWORD *)(v10 + 16) = 0LL;
    return 0LL;
  }
  return result;
}