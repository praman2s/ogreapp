#include <OgreRoot.h>
#include <OgreCamera.h>
#include <OgreViewport.h>
#include <OgreSceneManager.h>
#include <OgreRenderWindow.h>
#include <OgreConfigFile.h>
#include <OgreException.h>
#include <OgreEntity.h>
#include <OgreFrameListener.h>
#include <SDL/SDL_image.h>

Ogre::MovablePlane* mPlane;
Ogre::Entity* mPlaneEntity;
Ogre::SceneNode* mPlaneNode;
Ogre::Rectangle2D* mMiniscreen;

using namespace Ogre;
int main()
{
    SDL_Surface *image;
    Ogre::String mPluginsCfg("");
    Ogre::Root* mRoot;
    mRoot = new Ogre::Root(mPluginsCfg);

    Ogre::SceneManager *mSceneMgr;
//    mSceneMgr = mRoot->createSceneManager(Ogre::ST_EXTERIOR_CLOSE);
//    Ogre::Camera *mCamera;
//    mSceneMgr->setAmbientLight(Ogre::ColourValue(0.2, 0.2, 0.2));
 //
//    Ogre::Light* light = mSceneMgr->createLight("MainLight");
//    light->setPosition(20, 80, 50);
//    
//    mCamera->setPosition(60, 200, 70);
//    mCamera->lookAt(0,0,0);
//    
//    Ogre::MaterialPtr mat =
//        Ogre::MaterialManager::getSingleton().create(
//                                                     "PlaneMat", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
//    
//    Ogre::TextureUnitState* tuisTexture =
//        mat->getTechnique(0)->getPass(0)->createTextureUnitState("grass_1024.jpg");
//    
//    mPlane = new Ogre::MovablePlane("Plane");
//    mPlane->d = 0;
//    mPlane->normal = Ogre::Vector3::UNIT_Y;
//    
//    Ogre::MeshManager::getSingleton().createPlane(
//                                              "PlaneMesh",
//                                              Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME,
//                                              *mPlane,
//                                              120, 120, 1, 1,
//                                              true,
//                                              1, 1, 1,
//                                              Ogre::Vector3::UNIT_Z);
//    mPlaneEntity = mSceneMgr->createEntity("PlaneMesh");
//    mPlaneEntity->setMaterialName("PlaneMat");
//    
//    mPlaneNode = mSceneMgr->getRootSceneNode()->createChildSceneNode();
//    mPlaneNode->attachObject(mPlaneEntity);
    
    return 0;
 
}
