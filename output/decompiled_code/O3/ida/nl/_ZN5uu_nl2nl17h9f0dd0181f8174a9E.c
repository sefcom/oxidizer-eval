__int64 __fastcall uu_nl::nl(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rbp
  __int128 *v10; // rsi
  char v11; // al
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+7h] [rbp-161h]
  __int64 v16; // [rsp+8h] [rbp-160h]
  __int128 v17; // [rsp+10h] [rbp-158h] BYREF
  __int128 *v18; // [rsp+20h] [rbp-148h]
  __int128 v19; // [rsp+28h] [rbp-140h]
  __int64 (__fastcall *v20)(); // [rsp+38h] [rbp-130h]
  __int128 v21; // [rsp+40h] [rbp-128h] BYREF
  __int128 *v22; // [rsp+50h] [rbp-118h]
  __int64 v23; // [rsp+58h] [rbp-110h] BYREF
  __int128 v24; // [rsp+60h] [rbp-108h] BYREF
  __int128 *v25; // [rsp+70h] [rbp-F8h]
  __int64 (__fastcall *v26)(); // [rsp+78h] [rbp-F0h]
  __int64 v27; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+90h] [rbp-D8h]
  __int64 v29; // [rsp+98h] [rbp-D0h]
  __int128 *v30; // [rsp+A0h] [rbp-C8h]
  __int64 v31; // [rsp+A8h] [rbp-C0h]
  __int64 v32; // [rsp+B0h] [rbp-B8h]
  __int64 v33; // [rsp+B8h] [rbp-B0h]
  _QWORD *v34; // [rsp+C0h] [rbp-A8h]
  _QWORD *v35; // [rsp+C8h] [rbp-A0h]
  __int64 v36; // [rsp+D0h] [rbp-98h]
  __int64 v37; // [rsp+D8h] [rbp-90h]
  __int64 v38; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v39; // [rsp+E8h] [rbp-80h]
  __int128 v40; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+100h] [rbp-68h]
  _BYTE v42[24]; // [rsp+108h] [rbp-60h] BYREF
  __int128 v43; // [rsp+120h] [rbp-48h] BYREF
  __int64 v44; // [rsp+130h] [rbp-38h]

  v23 = a1;
  v5 = *a2;
  <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v40, &v23);
  if ( (_QWORD)v40 != 0x8000000000000001LL )
  {
    v8 = (_QWORD *)(a3 + 16);
    v38 = *(_QWORD *)(a3 + 56);
    v37 = *(_QWORD *)(a3 + 64);
    v34 = (_QWORD *)(a3 + 32);
    v15 = *(_BYTE *)(a3 + 128);
    v36 = *(_QWORD *)(a3 + 96);
    v28 = *(_QWORD *)(a3 + 112);
    v32 = *(_QWORD *)(a3 + 120);
    v33 = v32 + 1;
    v31 = a3 + 129;
    v30 = (__int128 *)(a3 + 72);
    v29 = *(_QWORD *)(a3 + 104);
    v16 = a2[1];
    v9 = a2[2];
    v39 = 0x8000000000000000LL;
    v35 = (_QWORD *)(a3 + 16);
    while ( 1 )
    {
      v44 = v41;
      v43 = v40;
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v17,
        &v43);
      v6 = *((_QWORD *)&v17 + 1);
      v10 = v18;
      if ( (_QWORD)v17 == v39 )
        return v6;
      v21 = v17;
      v22 = v18;
      ++v9;
      if ( v18 )
        v9 = 0LL;
      a2[2] = v9;
      v11 = uu_nl::SectionDelimiter::parse(v6, v10, v38, v37);
      v12 = (_QWORD *)a3;
      switch ( v11 )
      {
        case 0:
          goto LABEL_12;
        case 1:
          v12 = v35;
LABEL_12:
          if ( !v15 )
            goto LABEL_5;
          goto LABEL_15;
        case 2:
          v12 = v34;
          if ( v15 )
          {
LABEL_15:
            *a2 = 1LL;
            v13 = v36;
            a2[1] = v36;
            v5 = 1LL;
            v16 = v13;
          }
LABEL_5:
          *(_QWORD *)&v17 = &off_2D77C8;
          *((_QWORD *)&v17 + 1) = 1LL;
          v18 = (_OWORD *)&byte_8;
          v19 = 0LL;
          std::io::stdio::_print(&v17);
          goto LABEL_6;
        case 3:
          switch ( *v8 )
          {
            case 0LL:
              if ( v22 )
                goto LABEL_23;
              if ( !v28 )
                core::panicking::panic_const::panic_const_rem_by_zero(&off_2D77D8);
              if ( (v28 | v9) >> 32 )
              {
                if ( v9 % v28 )
                  goto LABEL_26;
              }
              else if ( (unsigned int)v9 % (unsigned int)v28 )
              {
LABEL_26:
                alloc::str::<impl str>::repeat(v42, asc_61F09, 1LL, v33);
                *(_QWORD *)&v24 = v42;
                *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
                v25 = &v21;
                v26 = <alloc::string::String as core::fmt::Display>::fmt;
                *(_QWORD *)&v17 = &unk_2D77F0;
                *((_QWORD *)&v17 + 1) = 3LL;
                v18 = &v24;
                v19 = 2uLL;
                std::io::stdio::_print(&v17);
                core::ptr::drop_in_place<alloc::string::String>(v42);
                v12 = v8;
                goto LABEL_6;
              }
LABEL_23:
              if ( !v5 )
              {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, aLineNumberOver, 20LL);
                v18 = v25;
                v17 = v24;
                LODWORD(v19) = 1;
                v6 = alloc::boxed::Box<T>::new(&v17);
                core::ptr::drop_in_place<alloc::string::String>(&v21);
                return v6;
              }
              uu_nl::NumberFormat::format(v42, v31, v16, v32);
              *(_QWORD *)&v17 = v42;
              *((_QWORD *)&v17 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              v18 = v30;
              *(_QWORD *)&v19 = <alloc::string::String as core::fmt::Display>::fmt;
              *((_QWORD *)&v19 + 1) = &v21;
              v20 = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v24 = &unk_2D7820;
              *((_QWORD *)&v24 + 1) = 4LL;
              v27 = 0LL;
              v25 = &v17;
              v26 = (__int64 (__fastcall *)())(&dword_0 + 3);
              std::io::stdio::_print(&v24);
              core::ptr::drop_in_place<alloc::string::String>(v42);
              v14 = v29 + v16;
              v5 = !__OFADD__(v29, v16);
              *a2 = v5;
              v16 = v14;
              a2[1] = v14;
              v12 = v8;
LABEL_6:
              core::ptr::drop_in_place<alloc::string::String>(&v21);
              <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v40, &v23);
              v8 = v12;
              if ( (_QWORD)v40 == 0x8000000000000001LL )
                return 0LL;
              break;
            case 1LL:
              if ( v22 )
                goto LABEL_23;
              goto LABEL_26;
            case 2LL:
              goto LABEL_26;
            case 3LL:
              JUMPOUT(0x159723LL);
          }
          return result;
      }
    }
  }
  return 0LL;
}
