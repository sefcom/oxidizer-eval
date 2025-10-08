__int64 __fastcall uu_nl::nl(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // r12
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  char v12; // al
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r13
  char v18; // [rsp+Fh] [rbp-169h]
  __int128 v19; // [rsp+10h] [rbp-168h] BYREF
  __m256i v20; // [rsp+20h] [rbp-158h]
  __int64 v21; // [rsp+48h] [rbp-130h]
  __int64 v22; // [rsp+50h] [rbp-128h]
  __int128 v23; // [rsp+58h] [rbp-120h] BYREF
  __int64 v24; // [rsp+68h] [rbp-110h]
  __int128 v25; // [rsp+70h] [rbp-108h] BYREF
  __int64 v26; // [rsp+80h] [rbp-F8h]
  __int128 v27; // [rsp+90h] [rbp-E8h] BYREF
  __m256i v28; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v29; // [rsp+C0h] [rbp-B8h]
  __int64 v30; // [rsp+C8h] [rbp-B0h]
  __int64 v31; // [rsp+D0h] [rbp-A8h]
  __int64 v32; // [rsp+D8h] [rbp-A0h]
  __int64 v33; // [rsp+E0h] [rbp-98h]
  __int64 v34; // [rsp+E8h] [rbp-90h]
  _QWORD *v35; // [rsp+F0h] [rbp-88h]
  _QWORD *v36; // [rsp+F8h] [rbp-80h]
  __int64 v37; // [rsp+100h] [rbp-78h]
  _QWORD *v38; // [rsp+108h] [rbp-70h]
  __int64 v39; // [rsp+110h] [rbp-68h]
  __int64 v40; // [rsp+118h] [rbp-60h]
  unsigned __int64 v41; // [rsp+120h] [rbp-58h]
  __int64 v42; // [rsp+128h] [rbp-50h]
  _QWORD v43[9]; // [rsp+130h] [rbp-48h] BYREF

  v5 = *a2;
  v42 = a1;
  <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v43);
  if ( v43[0] == 0x8000000000000001LL )
    return 0LL;
  v21 = v5;
  v7 = (_QWORD *)(a3 + 16);
  v40 = *(_QWORD *)(a3 + 56);
  v39 = *(_QWORD *)(a3 + 64);
  v35 = (_QWORD *)(a3 + 32);
  v18 = *(_BYTE *)(a3 + 128);
  v37 = *(_QWORD *)(a3 + 96);
  v29 = *(_QWORD *)(a3 + 112);
  v33 = *(_QWORD *)(a3 + 120);
  v34 = v33 + 1;
  v32 = a3 + 129;
  v31 = a3 + 72;
  v38 = (_QWORD *)a3;
  v30 = *(_QWORD *)(a3 + 104);
  v22 = a2[1];
  v8 = a2[2];
  v9 = v43;
  v41 = 0x8000000000000000LL;
  v36 = (_QWORD *)(a3 + 16);
  while ( 2 )
  {
    v10 = v9;
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v19);
    v6 = *((_QWORD *)&v19 + 1);
    v11 = v20.m256i_i64[0];
    if ( (_QWORD)v19 == v41 )
      return v6;
    v23 = v19;
    v24 = v20.m256i_i64[0];
    ++v8;
    if ( v20.m256i_i64[0] )
      v8 = 0LL;
    a2[2] = v8;
    v12 = uu_nl::SectionDelimiter::parse(v6, v11, v40, v39);
    v13 = v38;
    switch ( v12 )
    {
      case 0:
        goto LABEL_11;
      case 1:
        v13 = v36;
LABEL_11:
        if ( (v18 & 1) != 0 )
          goto LABEL_14;
        goto LABEL_4;
      case 2:
        v13 = v35;
        if ( (v18 & 1) != 0 )
        {
LABEL_14:
          *a2 = 1LL;
          v14 = v37;
          a2[1] = v37;
          v21 = 1LL;
          v22 = v14;
        }
LABEL_4:
        *(_QWORD *)&v19 = &off_2391D8;
        *((_QWORD *)&v19 + 1) = 1LL;
        v20.m256i_i64[0] = 8LL;
        *(_OWORD *)&v20.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v19);
        goto LABEL_5;
      case 3:
        switch ( *v7 )
        {
          case 0LL:
            if ( v24 )
              goto LABEL_22;
            if ( !v29 )
              core::panicking::panic_const::panic_const_rem_by_zero(&off_239258);
            if ( (v29 | v8) >> 32 )
            {
              if ( v8 % v29 )
                goto LABEL_27;
            }
            else if ( (unsigned int)v8 % (unsigned int)v29 )
            {
              goto LABEL_27;
            }
            goto LABEL_22;
          case 1LL:
            if ( v24 )
              goto LABEL_22;
            goto LABEL_27;
          case 2LL:
            goto LABEL_27;
          case 3LL:
            v16 = (_QWORD *)v7[1];
            LODWORD(v19) = 0;
            *((_QWORD *)&v19 + 1) = *((_QWORD *)&v23 + 1);
            *(_OWORD *)v20.m256i_i8 = (unsigned __int64)v24;
            v20.m256i_i64[2] = v24;
            v20.m256i_i8[24] = 1;
            regex_automata::util::search::Input::set_span(&v19);
            v28 = v20;
            v27 = v19;
            regex_automata::meta::regex::Regex::search_half(&v19, *v16, v16[1], &v27);
            if ( (v19 & 1) != 0 )
            {
LABEL_22:
              if ( (v21 & 1) == 0 )
              {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, aLineNumberOver, 20LL);
                v20.m256i_i64[0] = v28.m256i_i64[0];
                v19 = v27;
                v20.m256i_i32[2] = 1;
                v6 = alloc::boxed::Box<T>::new(&v19);
                core::ptr::drop_in_place<alloc::string::String>(v23, *((_QWORD *)&v23 + 1));
                return v6;
              }
              uu_nl::NumberFormat::format(&v25, v32, v22, v33);
              *(_QWORD *)&v19 = &v25;
              *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              v20.m256i_i64[0] = v31;
              v20.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              v20.m256i_i64[2] = (__int64)&v23;
              v20.m256i_i64[3] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v27 = &unk_2391E8;
              *((_QWORD *)&v27 + 1) = 4LL;
              v28.m256i_i64[0] = (__int64)&v19;
              *(_OWORD *)&v28.m256i_u64[1] = 3uLL;
              std::io::stdio::_print(&v27);
              core::ptr::drop_in_place<alloc::string::String>(v25, *((_QWORD *)&v25 + 1));
              v15 = v30 + v22;
              if ( __OFADD__(v30, v22) )
              {
                *a2 = 0LL;
                v21 = 0LL;
              }
              else
              {
                *a2 = 1LL;
                a2[1] = v15;
                v21 = 1LL;
                v22 = v15;
              }
              v13 = v7;
            }
            else
            {
LABEL_27:
              alloc::slice::<impl [T]>::repeat(&v19, v34);
              v26 = v20.m256i_i64[0];
              v25 = v19;
              *(_QWORD *)&v27 = &v25;
              *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              v28.m256i_i64[0] = (__int64)&v23;
              v28.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v19 = &unk_239228;
              *((_QWORD *)&v19 + 1) = 3LL;
              v20.m256i_i64[0] = (__int64)&v27;
              *(_OWORD *)&v20.m256i_u64[1] = 2uLL;
              std::io::stdio::_print(&v19);
              core::ptr::drop_in_place<alloc::string::String>(v25, *((_QWORD *)&v25 + 1));
              v13 = v7;
            }
LABEL_5:
            core::ptr::drop_in_place<alloc::string::String>(v23, *((_QWORD *)&v23 + 1));
            <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v10);
            v9 = v10;
            v7 = v13;
            if ( v43[0] != 0x8000000000000001LL )
              continue;
            v6 = 0LL;
            break;
        }
        break;
    }
    return v6;
  }
}