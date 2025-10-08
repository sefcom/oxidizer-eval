__int64 __fastcall alacritty::message_bar::Message::text(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  float v5; // xmm0_4
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  bool v10; // cf
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int8 code_point; // al
  unsigned int v14; // edx
  unsigned int v15; // r12d
  __int64 v16; // r15
  unsigned __int64 v17; // rcx
  unsigned __int8 v18; // bp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rbp
  unsigned __int8 v23; // al
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // r14
  __int64 v29; // rbx
  __int64 result; // rax
  _OWORD *v31; // rcx
  __int128 v32; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-F0h]
  __int128 v34; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h]
  __int128 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-B0h]
  __int128 v39; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int128 v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+90h] [rbp-78h]
  __int64 v43; // [rsp+98h] [rbp-70h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-60h]
  _QWORD v46[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-38h]

  v5 = (float)(*(float *)(a4 + 20) - (float)(*(float *)(a4 + 36) + *(float *)(a4 + 36))) / *(float *)(a4 + 28);
  v7 = (unsigned int)(int)v5;
  if ( v5 < 0.0 )
    v7 = 0LL;
  v43 = a1;
  v8 = -1LL;
  if ( v5 <= 1.8446743e19 )
    v8 = v7;
  v9 = *(_QWORD *)(a4 + 8);
  v10 = v8 < 3;
  v11 = v8 - 3;
  if ( v10 )
    v11 = 0LL;
  v44 = v11;
  v38 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(&unk_10359F, aAlacrittySocke_0);
  *(_QWORD *)&v32 = 0LL;
  *((_QWORD *)&v32 + 1) = 8LL;
  v33 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 1LL;
  v37 = 0LL;
  v46[0] = core::str::<impl str>::trim_matches(a2, a3);
  v46[1] = v46[0] + v12;
  code_point = core::str::validations::next_code_point(v46);
  if ( (code_point & (v14 != (_DWORD)&unk_110000)) == 1 )
  {
    v15 = v14;
    v16 = 0LL;
    v17 = v9 - (v38 + 1);
    if ( v9 < v38 + 1 )
      v17 = 0LL;
    v45 = v17;
    do
    {
      if ( v15 == 10 || v16 == v9 || v9 >= v38 && !v33 && v16 == v45 )
      {
        v18 = 1;
        if ( v15 - 9 >= 5 && v15 != 32 )
        {
          if ( v15 < 0x80 )
            v18 = 0;
          else
            v18 = core::unicode::unicode_data::white_space::lookup(v15);
        }
        *(_QWORD *)&v39 = 0LL;
        *((_QWORD *)&v39 + 1) = 1LL;
        v40 = 0LL;
        v19 = core::str::<impl str>::rfind(*((_QWORD *)&v36 + 1), v37);
        if ( (core::option::Option<T>::filter(v19, v20, v18) & 1) != 0 )
        {
          alloc::string::String::split_off(&v47, &v36, v21 + 1);
          alloc::string::String::pop(&v36);
          core::ptr::drop_in_place<alloc::string::String>(&v39);
          v40 = v48;
          v39 = v47;
        }
        v35 = v37;
        v34 = v36;
        alacritty::message_bar::Message::pad_text(&v41, &v34, v9);
        alloc::vec::Vec<T,A>::push(&v32, &v41, &off_883250);
        v36 = v39;
        v37 = v40;
        v16 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(
                *((_QWORD *)&v39 + 1),
                *((_QWORD *)&v39 + 1) + v40);
        if ( v18 )
          goto LABEL_31;
      }
      alloc::string::String::push(&v36, v15);
      if ( v15 >= 0x7F )
      {
        if ( v15 < 0xA0 )
        {
          v22 = 0LL;
        }
        else
        {
          v23 = unicode_width::tables::lookup_width(v15);
          if ( v23 == 2 )
          {
            v22 = 2LL;
            alloc::string::String::push(&v36, 32LL);
          }
          else
          {
            v22 = v23;
          }
        }
      }
      else
      {
        v22 = v15 >= 0x20;
      }
      v16 += v22;
LABEL_31:
      if ( (core::str::validations::next_code_point(v46) & 1) == 0 )
        break;
      v15 = v24;
    }
    while ( v24 != (_DWORD)&unk_110000 );
  }
  v35 = v37;
  v34 = v36;
  alacritty::message_bar::Message::pad_text(&v41, &v34, v9);
  alloc::vec::Vec<T,A>::push(&v32, &v41, &off_883238);
  v25 = v33 - v44;
  if ( v33 > v44 )
  {
    v33 = v44;
    core::ptr::drop_in_place<[alloc::string::String]>(*((_QWORD *)&v32 + 1) + 24 * v44, v25);
    if ( v9 >= 0x13 )
    {
      *(_QWORD *)&v34 = *((_QWORD *)&v32 + 1);
      *((_QWORD *)&v34 + 1) = *((_QWORD *)&v32 + 1) + 24 * v33;
      v26 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v34);
      if ( v26 )
      {
        v27 = v26;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v34, aMessageTruncat);
        v42 = v35;
        v41 = v34;
        alacritty::message_bar::Message::pad_text(&v34, &v41, v9);
        core::ptr::drop_in_place<alloc::string::String>(v27);
        *(_QWORD *)(v27 + 16) = v35;
        *(_OWORD *)v27 = v34;
      }
    }
  }
  v10 = v9 < v38;
  v28 = v9 - v38;
  if ( !v10 && v33 )
  {
    v29 = *((_QWORD *)&v32 + 1);
    alloc::string::String::truncate(*((_QWORD *)&v32 + 1), v28);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      v29,
      &unk_10359F,
      aAlacrittySocke_0);
  }
  result = v33;
  v31 = (_OWORD *)v43;
  *(_QWORD *)(v43 + 16) = v33;
  *v31 = v32;
  return result;
}