#include <Geode/Geode.hpp>

#include <Geode/modify/LevelSettingsLayer.hpp>

using namespace geode::prelude;

class $modify(LevelSettingsLayer)
{
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1)
    {
        LevelSettingsLayer::init(p0, p1);

            auto dir = CCDirector::sharedDirector();
            auto winsize = dir->getWinSize();
            if(p0->m_startsWithStartPos)
            {
            auto lay = (CCLayer*)this->getChildren()->objectAtIndex(0);

            auto mainMenu = (CCMenu*)lay->getChildren()->objectAtIndex(0);

            auto targetordercuadrado = (CCNode*)lay->getChildren()->objectAtIndex(5);
            targetordercuadrado->setContentSize({55, 30});

            auto targetchannelcuadrado = (CCNode*)lay->getChildren()->objectAtIndex(8);
            targetchannelcuadrado->setContentSize({75, 30});

            auto resetcamera = (CCNode*)lay->getChildren()->objectAtIndex(3);
            resetcamera->setScale(0.375f);

            auto disableLabel = (CCLabelBMFont*)lay->getChildren()->objectAtIndex(2);
            disableLabel->setFntFile("bigFont.fnt");
            disableLabel->setPosition({resetcamera->getPositionX() + 24, resetcamera->getPositionY() + 30});
            disableLabel->setScale(0.375f);


            auto speedlab = (CCNode*)lay->getChildren()->objectAtIndex(10);

            auto optionslab = (CCNode*)lay->getChildren()->objectAtIndex(12);
            optionslab->setPosition({winsize.width / 2, speedlab->getPositionY()});

            auto modelab = (CCNode*)lay->getChildren()->objectAtIndex(11);
            modelab->setPosition({winsize.width / 2 + 180, speedlab->getPositionY()});

            auto menusito = (CCNode*)this->m_buttonMenu;
            auto resetCameraButton = (CCMenuItemToggler*)menusito->getChildren()->objectAtIndex(2);
            auto disableButton = (CCMenuItemToggler*)menusito->getChildren()->objectAtIndex(1);
            disableButton->setPosition({resetCameraButton->getPositionX(), disableButton->getPositionY() + 150});
            disableButton->setScale(0.9f);

            auto speedButton = (CCMenuItemToggler*)menusito->getChildren()->objectAtIndex(3);

            auto modeButton = (CCMenuItemSpriteExtra*)menusito->getChildren()->objectAtIndex(4);
            modeButton->setPosition(modeButton->getPositionX() + 365, speedButton->getPositionY());

            auto optionsButton = (CCMenuItemSpriteExtra*)menusito->getChildren()->objectAtIndex(5);
            optionsButton->setPosition(optionsButton->getPositionX() + 185, speedButton->getPositionY());

            }
        return true;
    }
};
