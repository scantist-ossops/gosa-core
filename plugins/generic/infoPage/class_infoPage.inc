<?php

class infoPage extends plugin
{

    function exectue()
    {
        $smarty = get_smarty();
        return($smarty->fetch(get_template_path("infoPage.tpl")));
    }
}

?>