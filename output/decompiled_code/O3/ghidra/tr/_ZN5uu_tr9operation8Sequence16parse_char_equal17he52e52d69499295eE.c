void __rustcall
uu_tr::operation::Sequence::parse_char_equal
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_50 [3];
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  local_28 = "[=";
  local_20 = 2;
  local_50[0] = 0x8000000000000001;
  local_38 = "=]";
  local_30 = 2;
  local_18 = "=]";
  local_10 = 2;
                    /* try { // try from 001be902 to 001be90b has its CatchHandler @ 001be91c */
  nom::sequence::delimited::___closure__(param_1,local_50,param_2,param_3);
  core::ptr::
  drop_in_place<nom::sequence::delimited<&[u8],&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::__closure__,nom::branch::alt<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,(nom::combinator::value<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,&[u8],nom::error::Error<&[u8]>,nom::combinator::peek<&[u8],&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::__closure__>::__closure__>::__closure__,nom::combinator::map<&[u8],u8,core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,uu_tr::operation::Sequence::parse_backslash_or_char,uu_tr::operation::Sequence::parse_char_equal::__closure__>::__closure__)>::__closure__,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::__closure__>::__closure__>
            (local_50);
  return;
}