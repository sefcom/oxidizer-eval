
  fn alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..Hint$GT$::serialize::h0b78fdbb6b6ab162(arg1: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    let rcx: i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_map::h0d9cfaedd77fcf02(&result_1, rsi, 0, rcx);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..HintContent$GT$::serialize::h7e51ac0306650490(arg1[0x18], arg1[0x19], &result_1);
        result = alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..HintAction$GT$::serialize::ha835bd41360b5d01(arg1, &result_1);
        
        if result == 0
        {
            serde::ser::SerializeMap::serialize_entry::hfb3d73d73650d998(&result_1, 
                "post_processingpersistbindingstr…", 0xf, arg1[0x1b]);
            serde::ser::SerializeMap::serialize_entry::hfb3d73d73650d998(&result_1, 
                "persistbindingstruct Hintcontent…", 7, *arg1.byte_offset(0xd9));
            result = serde::ser::SerializeMap::serialize_entry::h80be0cddc6f7678d(&result_1, 
                *arg1.byte_offset(0xd4));
            
            if result == 0
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeMap$GT$::end::h3ea70a58a172b1ed(*result_1, var_18);
                return 0;
            }
        }
    }
    
    result
}
