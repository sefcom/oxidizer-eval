__int64 __fastcall flealib::email::EMail::send_email(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v15; // rbx
  __int64 v17; // [rsp+8h] [rbp-310h] BYREF
  __int128 v18; // [rsp+10h] [rbp-308h]
  __m256i v19; // [rsp+20h] [rbp-2F8h]
  __int128 dest; // [rsp+40h] [rbp-2D8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-2C8h]
  __int128 v22; // [rsp+60h] [rbp-2B8h]
  __int128 v23; // [rsp+70h] [rbp-2A8h]
  __int128 v24; // [rsp+80h] [rbp-298h]
  char *v25; // [rsp+90h] [rbp-288h]
  __int128 v26; // [rsp+120h] [rbp-1F8h] BYREF
  __m256i v27; // [rsp+130h] [rbp-1E8h]
  __int128 src; // [rsp+180h] [rbp-198h] BYREF
  __int128 v29; // [rsp+190h] [rbp-188h]
  _BYTE v30[184]; // [rsp+260h] [rbp-B8h] BYREF

  *(_QWORD *)&dest = 0LL;
  *((_QWORD *)&dest + 1) = 8LL;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 0x8000000000000000LL;
  LOBYTE(v25) = 1;
  <lettre::message::mailbox::types::Mailbox as core::str::traits::FromStr>::from_str(&src, a4, a5);
  core::result::Result<T,E>::unwrap(&v26, &src, &off_70A348);
  lettre::message::MessageBuilder::from(&src, &dest, &v26);
  <lettre::message::mailbox::types::Mailbox as core::str::traits::FromStr>::from_str(&dest, a2, a3);
  core::result::Result<T,E>::unwrap(&v26, &dest, &off_70A360);
  lettre::message::MessageBuilder::to(&dest, &src, &v26);
  lettre::message::MessageBuilder::subject(&src, &dest, a6, a7);
  v25 = &byte_4;
  v24 = *(_OWORD *)&qword_70A3B8;
  v23 = unk_70A3A8;
  v22 = xmmword_70A398;
  v21 = xmmword_70A388;
  dest = xmmword_70A378;
  lettre::message::MessageBuilder::header(&v26, &src, &dest);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, a8, a9);
  *(_QWORD *)&v29 = v21;
  src = dest;
  lettre::message::MessageBuilder::body(&dest);
  core::result::Result<T,E>::unwrap(v30, &dest);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, a10, a11);
  *(_QWORD *)&v29 = v21;
  src = dest;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, a12, a13);
  v19.m256i_i64[3] = v21;
  *(_OWORD *)&v19.m256i_u64[1] = dest;
  v18 = src;
  v19.m256i_i64[0] = v29;
  lettre::transport::smtp::transport::SmtpTransport::relay(&dest);
  core::result::Result<T,E>::unwrap(&src, &dest);
  v27 = v19;
  v26 = v18;
  lettre::transport::smtp::transport::SmtpTransportBuilder::credentials(&dest, &src);
  v17 = lettre::transport::smtp::transport::SmtpTransportBuilder::build(&dest);
  lettre::transport::Transport::send(&dest, &v17, v30);
  v15 = *((_QWORD *)&dest + 1);
  if ( (_QWORD)dest == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<lettre::transport::smtp::transport::SmtpTransport>(&v17);
    core::ptr::drop_in_place<lettre::message::Message>(v30);
  }
  else
  {
    v29 = v21;
    src = dest;
    core::ptr::drop_in_place<lettre::transport::smtp::response::Response>(&src);
    core::ptr::drop_in_place<lettre::transport::smtp::transport::SmtpTransport>(&v17);
    core::ptr::drop_in_place<lettre::message::Message>(v30);
    return 0LL;
  }
  return v15;
}