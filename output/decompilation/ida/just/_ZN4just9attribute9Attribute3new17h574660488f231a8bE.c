__int64 __fastcall just::attribute::Attribute::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  char v8; // al
  char v9; // cl
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 result; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  unsigned __int64 v22; // r13
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // [rsp+0h] [rbp-198h] BYREF
  char v26; // [rsp+10h] [rbp-188h]
  _BYTE v27[80]; // [rsp+20h] [rbp-178h] BYREF
  _OWORD v28[2]; // [rsp+70h] [rbp-128h] BYREF
  _BYTE v29[56]; // [rsp+98h] [rbp-100h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-C8h]
  __int128 v31; // [rsp+100h] [rbp-98h]
  _OWORD v32[2]; // [rsp+118h] [rbp-80h] BYREF
  _QWORD v33[12]; // [rsp+138h] [rbp-60h] BYREF

  v4 = just::token::Token::lexeme(a2);
  v6 = <just::attribute::AttributeDiscriminant as core::str::traits::FromStr>::from_str(v4, v5);
  if ( v6 == 20 )
  {
    *(_QWORD *)&v29[8] = just::token::Token::lexeme(a2);
    *(_QWORD *)&v29[16] = v7;
    *(_QWORD *)v29 = 0x8000000000000040LL;
    just::token::Token::error(v27, a2, v29);
    v8 = v27[0];
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v27[64];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v27[49];
    *(_OWORD *)(a1 + 33) = *(_OWORD *)&v27[33];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v27[17];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)&v27[1];
    v9 = v27[72];
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v27[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v27[73];
    *(_BYTE *)a1 = v8;
    *(_BYTE *)(a1 + 72) = v9;
    return core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(a3);
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 16);
    v11 = v6;
    switch ( v6 )
    {
      case 0u:
      case 2u:
        *(_QWORD *)&v25 = 0LL;
        *((_QWORD *)&v25 + 1) = 1LL;
        goto LABEL_5;
      case 1u:
      case 3u:
      case 6u:
      case 7u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
      case 0x12u:
        v25 = 0LL;
        goto LABEL_5;
      case 4u:
      case 5u:
      case 0x13u:
        *(_QWORD *)&v25 = 1LL;
        *((_QWORD *)&v25 + 1) = 1LL;
LABEL_5:
        v26 = 0;
        if ( (unsigned __int8)core::ops::range::RangeBounds::contains(&v25, v10) )
        {
          switch ( v11 )
          {
            case 0LL:
              <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v29, a3);
              <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v27, v29);
              result = core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<just::string_literal::StringLiteral>>(v29);
              v13 = 0x8000000000000001LL;
              goto LABEL_41;
            case 1LL:
              v22 = 0x8000000000000002LL;
              goto LABEL_37;
            case 2LL:
              <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v29, a3);
              <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v27, v29);
              result = core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<just::string_literal::StringLiteral>>(v29);
              v13 = 0x8000000000000003LL;
              goto LABEL_41;
            case 3LL:
              v22 = 0x8000000000000004LL;
              goto LABEL_37;
            case 4LL:
              <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28, a3);
              <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v29, v28);
              JUMPOUT(0x257AF7LL);
            case 5LL:
              <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28, a3);
              <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v29, v28);
              if ( *(_QWORD *)v29 == 0x8000000000000000LL )
                core::option::unwrap_failed(&off_42DC20);
              *(_OWORD *)&v27[32] = *(_OWORD *)&v29[32];
              *(_OWORD *)&v27[16] = *(_OWORD *)&v29[16];
              *(_OWORD *)v27 = *(_OWORD *)v29;
              result = core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<just::string_literal::StringLiteral>>(v28);
              v13 = 0x8000000000000006LL;
              goto LABEL_41;
            case 6LL:
              v22 = 0x8000000000000007LL;
              goto LABEL_37;
            case 7LL:
              v22 = 0x8000000000000008LL;
              goto LABEL_37;
            case 8LL:
              goto LABEL_11;
            case 9LL:
              JUMPOUT(0x257B44LL);
            case 10LL:
              v22 = 0x800000000000000BLL;
              goto LABEL_37;
            case 11LL:
              v22 = 0x800000000000000CLL;
              goto LABEL_37;
            case 12LL:
              v22 = 0x800000000000000DLL;
              goto LABEL_37;
            case 13LL:
              v22 = 0x800000000000000ELL;
              goto LABEL_37;
            case 14LL:
              v22 = 0x800000000000000FLL;
              goto LABEL_37;
            case 15LL:
              v22 = 0x8000000000000010LL;
              goto LABEL_37;
            case 16LL:
              goto LABEL_13;
            case 17LL:
              v22 = 0x8000000000000012LL;
              goto LABEL_37;
            case 18LL:
              v22 = 0x8000000000000013LL;
LABEL_37:
              *(_QWORD *)a1 = v22;
              *(_BYTE *)(a1 + 72) = 37;
              return core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(a3);
            case 19LL:
              <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28, a3);
              <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v29, v28);
              if ( *(_QWORD *)v29 == 0x8000000000000000LL )
                core::option::unwrap_failed(&off_42DC38);
              *(_OWORD *)&v27[32] = *(_OWORD *)&v29[32];
              *(_OWORD *)&v27[16] = *(_OWORD *)&v29[16];
              *(_OWORD *)v27 = *(_OWORD *)v29;
              result = core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<just::string_literal::StringLiteral>>(v28);
              v13 = 0x8000000000000014LL;
LABEL_41:
              *(_QWORD *)a1 = v13;
              v23 = *(_OWORD *)&v27[16];
              v24 = *(_OWORD *)&v27[32];
              *(_OWORD *)(a1 + 8) = *(_OWORD *)v27;
              *(_OWORD *)(a1 + 24) = v23;
              *(_OWORD *)(a1 + 40) = v24;
              *(_BYTE *)(a1 + 72) = 37;
              return result;
          }
        }
        goto LABEL_15;
      case 8u:
        *(_QWORD *)&v25 = 1LL;
        *((_QWORD *)&v25 + 1) = -1LL;
        v26 = 0;
        if ( !(unsigned __int8)core::ops::range::RangeBounds::contains(&v25, v10) )
          goto LABEL_15;
LABEL_11:
        *(_QWORD *)&v27[16] = *(_QWORD *)(a3 + 16);
        *(_OWORD *)v27 = *(_OWORD *)a3;
        *(_QWORD *)a1 = 0x8000000000000009LL;
        result = *(_QWORD *)&v27[16];
        v14 = *(_QWORD *)&v27[24];
        v15 = *(_OWORD *)&v27[32];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v27;
        *(_QWORD *)(a1 + 24) = result;
        *(_QWORD *)(a1 + 32) = v14;
        *(_OWORD *)(a1 + 40) = v15;
        goto LABEL_18;
      case 0x10u:
        *(_QWORD *)&v25 = 0LL;
        *((_QWORD *)&v25 + 1) = -1LL;
        v26 = 0;
        if ( !(unsigned __int8)core::ops::range::RangeBounds::contains(&v25, v10) )
        {
LABEL_15:
          *(_QWORD *)&v29[8] = just::token::Token::lexeme(a2);
          *(_QWORD *)&v29[16] = v16;
          *(_QWORD *)&v29[24] = v10;
          *(_OWORD *)&v29[32] = v25;
          *(_QWORD *)v29 = 0x8000000000000015LL;
          just::token::Token::error(v27, a2, v29);
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v27[64];
          v17 = *(_OWORD *)v27;
          v18 = *(_OWORD *)&v27[16];
          v19 = *(_OWORD *)&v27[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v27[48];
          *(_OWORD *)(a1 + 32) = v19;
          *(_OWORD *)(a1 + 16) = v18;
          *(_OWORD *)a1 = v17;
          return core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(a3);
        }
LABEL_13:
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v32, a3);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v33, v32);
        v28[1] = v32[1];
        v28[0] = v32[0];
        if ( v33[0] == 0x8000000000000000LL )
        {
          result = core::ptr::drop_in_place<just::attribute::Attribute::new::{{closure}}>(v28);
          *(_QWORD *)a1 = 0x8000000000000000LL;
        }
        else
        {
          just::attribute::Attribute::new::{{closure}}(v29, v32, v33);
          result = *(_QWORD *)v29;
          *(_OWORD *)v27 = *(_OWORD *)&v29[8];
          *(_OWORD *)&v27[16] = *(_OWORD *)&v29[24];
          *(_OWORD *)&v27[32] = *(_OWORD *)&v29[40];
          v31 = v30;
          *(_QWORD *)a1 = *(_QWORD *)v29;
        }
        v20 = *(_OWORD *)&v27[16];
        v21 = *(_OWORD *)&v27[32];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v27;
        *(_OWORD *)(a1 + 24) = v20;
        *(_OWORD *)(a1 + 40) = v21;
LABEL_18:
        *(_OWORD *)(a1 + 56) = v31;
        *(_BYTE *)(a1 + 72) = 37;
        break;
    }
  }
  return result;
}