package com.vector.cfg.automation.model.ecuc.microsar.canif;

 /*  Suppress warnings because it is generated code  */ 
 /*  CHECKSTYLE:OFF  */ 
 /*  Common Packages  */ 
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.math.*;
import com.google.common.base.Optional;
import com.google.common.base.Preconditions;
import com.google.common.collect.*;
import com.vector.annotations.publishedapi.*;
import com.vector.cfg.model.access.*;
import com.vector.cfg.model.access.TypedDefRef.*;
import com.vector.cfg.model.mdf.commoncore.autosar.*;
import com.vector.cfg.model.mdf.model.autosar.ecucdescription.*;
import com.vector.cfg.model.mdf.model.autosar.ecucparamdef.*;
import com.vector.cfg.model.mdf.model.autosar.commonpatterns.blockelements.MIDocumentationBlock;
import com.vector.cfg.gen.core.bswmdmodel.*;
import com.vector.cfg.gen.core.bswmdmodel.modelintern.*;
import com.vector.cfg.gen.core.bswmdmodel.param.*;
import com.vector.cfg.gen.core.moduleinterface.*;
import com.vector.cfg.gen.core.bswmdmodel.exceptions.BswmdModelException;
import com.vector.cfg.gen.core.bswmdmodel.IGeneratorModelAccess;
 /*  Parent Packages  */ 
 /*  Subelements Packages  */ 
import com.vector.cfg.automation.model.ecuc.microsar.canif.canifctrldrvcfg.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.canifdispatchcfg.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.canifinitcfg.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.canifprivatecfg.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.canifpubliccfg.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.caniftrcvdrvcfg.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.canifsecurityeventmapping.*;
import com.vector.cfg.automation.model.ecuc.microsar.canif.*;
 /*  BseInterface includes  */ 
 /*  ModuleDefinition includes  */ 
import com.vector.cfg.util.version.IVersion;


/**
 * Implementation class of module definition '/MICROSAR/CanIf'. 
 * 
 * <p>
 * Definition description:
 * <pre>
 * This container includes all necessary configuration sub-containers according the CAN Interface configuration structure.
 * </pre>
 * </p>
 *
 * <p>
 * HANDS OFF - THIS CODE HAS BEEN GENERATED AUTOMATICALLY! NEVER CHANGE IT MANUALLY!<br>
 * (c) Copyright Vector Informatik GmbH. All Rights Reserved.
 * </p>
 * 
 */
@SuppressWarnings({ "all", "warnings", "unchecked", "unused", "cast" })
public final class CanIf  extends GAbstractModuleConfiguration{
 

    /**
	 * <b><code>/[ANY]/CanIf</code></b>.
	 * <p>
	 * DefRef <code>CanIf</code>.<br>
	 * Package <code>/[ANY]</code>
	 * <ul>
	 *  <li>Configuration Class  - MIModuleConfiguration</li>
	 *  <li>Definition  Class    - MIModuleDef</li>
	 *  <li>Value Class          - Void</li>
	 *  <li>BswmdModel Class     - CanIf</li>
	 *  <li>TypeInfo             - TypeInfo.OPTIONAL_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
	 */
    public static final WrappedTypedDefRef<MIModuleDef,MIModuleConfiguration,Void,CanIf> DefRef = com.vector.cfg.automation.model.ecuc.microsar.canif.CanIfDefRefs.CanIfDefRef;
	 

       /**
     * Creators for subcontainers
     */
    
    private static final ICreateGIModelObjectFunction<CanIfCtrlDrvCfg> _CanIfCtrlDrvCfg_03e62853Creator = (defRef, cfgElement, modelAccess, parent) -> CanIfCtrlDrvCfg.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanIfDispatchCfg> _CanIfDispatchCfg_87c3a24dCreator = (defRef, cfgElement, modelAccess, parent) -> CanIfDispatchCfg.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanIfInitCfg> _CanIfInitCfg_0d6c1079Creator = (defRef, cfgElement, modelAccess, parent) -> CanIfInitCfg.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanIfPrivateCfg> _CanIfPrivateCfg_c4971c9bCreator = (defRef, cfgElement, modelAccess, parent) -> CanIfPrivateCfg.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanIfPublicCfg> _CanIfPublicCfg_0d39d162Creator = (defRef, cfgElement, modelAccess, parent) -> CanIfPublicCfg.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanIfTrcvDrvCfg> _CanIfTrcvDrvCfg_c631397dCreator = (defRef, cfgElement, modelAccess, parent) -> CanIfTrcvDrvCfg.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanIfSecurityEventMapping> _CanIfSecurityEventMapping_1b652cc2Creator = (defRef, cfgElement, modelAccess, parent) -> CanIfSecurityEventMapping.create(modelAccess, (MIContainer) cfgElement);
    
   	/**
     * Subcontainer declarations
     */
    
    private GIInternalCList<CanIfCtrlDrvCfg> _CanIfCtrlDrvCfg_03e62853; 
    private CanIfDispatchCfg _CanIfDispatchCfg_87c3a24d; 
    private boolean isCanIfDispatchCfgInitialized = false;

    private CanIfInitCfg _CanIfInitCfg_0d6c1079; 
    private boolean isCanIfInitCfgInitialized = false;

    private CanIfPrivateCfg _CanIfPrivateCfg_c4971c9b; 
    private boolean isCanIfPrivateCfgInitialized = false;

    private CanIfPublicCfg _CanIfPublicCfg_0d39d162; 
    private boolean isCanIfPublicCfgInitialized = false;

    private GIInternalCList<CanIfTrcvDrvCfg> _CanIfTrcvDrvCfg_c631397d; 
    private CanIfSecurityEventMapping _CanIfSecurityEventMapping_1b652cc2; 
    private boolean isCanIfSecurityEventMappingInitialized = false;


    /**
     * {@inheritDoc}
     */
    @Override
    protected void invalidateCache() {
        super.invalidateCache();
        
	    
	    /*
		 * Invalidate SubContainer Section
		 */
        if (_CanIfCtrlDrvCfg_03e62853 != null) {
            _CanIfCtrlDrvCfg_03e62853.invalidateCache();
        }
        isCanIfDispatchCfgInitialized = false; 
        isCanIfInitCfgInitialized = false; 
        isCanIfPrivateCfgInitialized = false; 
        isCanIfPublicCfgInitialized = false; 
        if (_CanIfTrcvDrvCfg_c631397d != null) {
            _CanIfTrcvDrvCfg_c631397d.invalidateCache();
        }
        isCanIfSecurityEventMappingInitialized = false; 
        
        
         /*
		 * Invalidate Parameter and Refs Section
		 */
    }   
   
    /**
     * Internal Constructor.
     * <p>
     * You shall use the {@link GIModelFactory} of your generated model to create instances of this type.
     * </p>
     *
     * <p>
     * CAUTION: You are NOT allowed to call this method. This is for internal use ONLY!
     * </p>
     * 
     * @param access
     * @param configuration The configElement of the MdfModel
     */
    private CanIf(IInternalGeneratorModelAccess access, MIModuleConfiguration configuration) {
        super(access, DefRef, configuration);
    }

    /**
     * Internal construction method.
     * <p>
     * You shall use the {@link GIModelFactory} of your generated model to create instances of this type.
     * </p>
     *
     * <p>
     * CAUTION: You are NOT allowed to call this method. This is for internal use ONLY!
     * </p>
     * 
     * @param access
     * @param configuration The configElement of the MdfModel
     */
    public static CanIf create(IInternalGeneratorModelAccess modelAccess, MIModuleConfiguration configuration) {
        GIModelObject value = modelAccess.getRelatedElement(configuration);
      	if( value != null){
      		return (CanIf) value;
      	}
        final CanIf moduleCfg = new CanIf(modelAccess, configuration);
        modelAccess.setRelatedElement(moduleCfg, configuration);
        return moduleCfg;
    }
    
	/*
	 * Init SubContainer Section
	 */
 	
 	private void initializeCanIfCtrlDrvCfg(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfCtrlDrvCfg'
        
        if (_CanIfCtrlDrvCfg_03e62853 == null) {

            _CanIfCtrlDrvCfg_03e62853 = BswmdModelInternalElementFactory.createGCList(this, CanIfCtrlDrvCfg.DefRef, _CanIfCtrlDrvCfg_03e62853Creator);
        }
        
	}
    
 	private void initializeCanIfDispatchCfg(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfDispatchCfg'
        
        if(isCanIfDispatchCfgInitialized == false){
            
            _CanIfDispatchCfg_87c3a24d = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanIfDispatchCfg.DefRef, _CanIfDispatchCfg_87c3a24dCreator);
            
            isCanIfDispatchCfgInitialized = true;
        }
        
	}
    
 	private void initializeCanIfInitCfg(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfInitCfg'
        
        if(isCanIfInitCfgInitialized == false){
            
            _CanIfInitCfg_0d6c1079 = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanIfInitCfg.DefRef, _CanIfInitCfg_0d6c1079Creator);
            
            isCanIfInitCfgInitialized = true;
        }
        
	}
    
 	private void initializeCanIfPrivateCfg(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfPrivateCfg'
        
        if(isCanIfPrivateCfgInitialized == false){
            
            _CanIfPrivateCfg_c4971c9b = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanIfPrivateCfg.DefRef, _CanIfPrivateCfg_c4971c9bCreator);
            
            isCanIfPrivateCfgInitialized = true;
        }
        
	}
    
 	private void initializeCanIfPublicCfg(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfPublicCfg'
        
        if(isCanIfPublicCfgInitialized == false){
            
            _CanIfPublicCfg_0d39d162 = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanIfPublicCfg.DefRef, _CanIfPublicCfg_0d39d162Creator);
            
            isCanIfPublicCfgInitialized = true;
        }
        
	}
    
 	private void initializeCanIfTrcvDrvCfg(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfTrcvDrvCfg'
        
        if (_CanIfTrcvDrvCfg_c631397d == null) {

            _CanIfTrcvDrvCfg_c631397d = BswmdModelInternalElementFactory.createGCList(this, CanIfTrcvDrvCfg.DefRef, _CanIfTrcvDrvCfg_c631397dCreator);
        }
        
	}
    
 	private void initializeCanIfSecurityEventMapping(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanIfSecurityEventMapping'
        
        if(isCanIfSecurityEventMappingInitialized == false){
            
            _CanIfSecurityEventMapping_1b652cc2 = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanIfSecurityEventMapping.DefRef, _CanIfSecurityEventMapping_1b652cc2Creator);
            
            isCanIfSecurityEventMappingInitialized = true;
        }
        
	}
     
  
   
	/**
     * {@inheritDoc}
     */
    @Override
    public DefRef getDefRef() {
        return DefRef;
    }

    
    /**
     * {@inheritDoc}
     */
    @Override
    public GIHasContainer getParent() {
        return null;
    }
 
 
    /**
     * {@inheritDoc}
     */
    @Override
    public IGeneratorModelAccess getGeneratorModelAccess() {
        return (IGeneratorModelAccess) super.getGeneratorModelAccess();
    }
 
    private IGeneratorPackage getGeneratorPackage() {
        return getGeneratorModelAccess().getGeneratorPackage();
    }
    

	/**
     * {@inheritDoc}
     */
    @Override
    public CanIf getModuleConfiguration(){
    	return (CanIf)super.getModuleConfiguration();
    }


  

	/*
	 * SubContainer Access section
	 */
	
	
	/**
     * Returns true if the CanIfCtrlDrvCfg exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfCtrlDrvCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal GICList<CanIfCtrlDrvCfg>}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.ONE_TO_UNLIMITED_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * Configuration parameters for all the underlying CANDRV modules are aggregated under this container. For each CANDRV module a seperate instance of this container has to be provided.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfCtrlDrvCfg(){
    	try {
    		initializeCanIfCtrlDrvCfg();
        	return !_CanIfCtrlDrvCfg_03e62853.isEmpty();
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanIfDispatchCfg exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfDispatchCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfDispatchCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * In this container callback functions are defined which are provided by upper layer modules of the CANIF. The callback functions defined in this container are common for all configured CANDRV/CANTRCV modules.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfDispatchCfg(){
    	try {
    		initializeCanIfDispatchCfg();
        	return _CanIfDispatchCfg_87c3a24d != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanIfInitCfg exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfInitCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfInitCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the init parameters of the CAN Interface. At least one (if only on CanIf with one possible Configuration), but multiple (CanIf with different Configurations) instances of this container are possible.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfInitCfg(){
    	try {
    		initializeCanIfInitCfg();
        	return _CanIfInitCfg_0d6c1079 != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanIfPrivateCfg exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPrivateCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPrivateCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the private configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfPrivateCfg(){
    	try {
    		initializeCanIfPrivateCfg();
        	return _CanIfPrivateCfg_c4971c9b != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanIfPublicCfg exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPublicCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPublicCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the public configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfPublicCfg(){
    	try {
    		initializeCanIfPublicCfg();
        	return _CanIfPublicCfg_0d39d162 != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanIfTrcvDrvCfg exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfTrcvDrvCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal GICList<CanIfTrcvDrvCfg>}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.ZERO_TO_UNLIMITED_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the configuration (parameters) of all addressed CAN transceivers by each underlying CAN Transceiver Driver module. For each CAN transceiver Driver a seperate instance of this container shall be provided.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfTrcvDrvCfg(){
    	try {
    		initializeCanIfTrcvDrvCfg();
        	return !_CanIfTrcvDrvCfg_c631397d.isEmpty();
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanIfSecurityEventMapping exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanIf/CanIfSecurityEventMapping</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfSecurityEventMapping}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.OPTIONAL_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the security event mapping configuration.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanIfSecurityEventMapping(){
    	try {
    		initializeCanIfSecurityEventMapping();
        	return _CanIfSecurityEventMapping_1b652cc2 != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
    
    /**
     * Gets the CanIfCtrlDrvCfg.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfCtrlDrvCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal GICList<CanIfCtrlDrvCfg>}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.ONE_TO_UNLIMITED_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * Configuration parameters for all the underlying CANDRV modules are aggregated under this container. For each CANDRV module a seperate instance of this container has to be provided.
     * </pre>
     * </p>
     * 
     * @return The CanIfCtrlDrvCfg.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public GICList<CanIfCtrlDrvCfg> getCanIfCtrlDrvCfg(){
    	try{
    		switchView();
    		
	    	initializeCanIfCtrlDrvCfg();
	        
	        // Do not assert because the list always exists (it may be empty)
	        
	        return _CanIfCtrlDrvCfg_03e62853;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfDispatchCfg.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfDispatchCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfDispatchCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * In this container callback functions are defined which are provided by upper layer modules of the CANIF. The callback functions defined in this container are common for all configured CANDRV/CANTRCV modules.
     * </pre>
     * </p>
     * 
     * @return The CanIfDispatchCfg.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanIfDispatchCfg getCanIfDispatchCfg(){
    	try{
    		switchView();
    		
	    	initializeCanIfDispatchCfg();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanIfDispatchCfg_87c3a24d, CanIfDispatchCfg.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfDispatchCfg_87c3a24d, _CanIfDispatchCfg_87c3a24d.getMdfObject());
	        
	        return _CanIfDispatchCfg_87c3a24d;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfDispatchCfg or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfDispatchCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfDispatchCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * In this container callback functions are defined which are provided by upper layer modules of the CANIF. The callback functions defined in this container are common for all configured CANDRV/CANTRCV modules.
     * </pre>
     * </p>
     * 
     * @return The CanIfDispatchCfg or null.
     */
    public CanIfDispatchCfg getCanIfDispatchCfgOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanIfDispatchCfg();
	    	if (_CanIfDispatchCfg_87c3a24d != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfDispatchCfg_87c3a24d, _CanIfDispatchCfg_87c3a24d.getMdfObject());
	    	}
	        return _CanIfDispatchCfg_87c3a24d;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfDispatchCfg or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfDispatchCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfDispatchCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * In this container callback functions are defined which are provided by upper layer modules of the CANIF. The callback functions defined in this container are common for all configured CANDRV/CANTRCV modules.
     * </pre>
     * </p>
     * 
     * @return The CanIfDispatchCfg.
     */
    public CanIfDispatchCfg getCanIfDispatchCfgOrCreate(){
    	try{
    		switchView();
    		
	    	final CanIfDispatchCfg loc = getCanIfDispatchCfgOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanIfDispatchCfg.DefRef, _CanIfDispatchCfg_87c3a24dCreator);
            return getCanIfDispatchCfgOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfInitCfg.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfInitCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfInitCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the init parameters of the CAN Interface. At least one (if only on CanIf with one possible Configuration), but multiple (CanIf with different Configurations) instances of this container are possible.
     * </pre>
     * </p>
     * 
     * @return The CanIfInitCfg.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanIfInitCfg getCanIfInitCfg(){
    	try{
    		switchView();
    		
	    	initializeCanIfInitCfg();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanIfInitCfg_0d6c1079, CanIfInitCfg.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfInitCfg_0d6c1079, _CanIfInitCfg_0d6c1079.getMdfObject());
	        
	        return _CanIfInitCfg_0d6c1079;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfInitCfg or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfInitCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfInitCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the init parameters of the CAN Interface. At least one (if only on CanIf with one possible Configuration), but multiple (CanIf with different Configurations) instances of this container are possible.
     * </pre>
     * </p>
     * 
     * @return The CanIfInitCfg or null.
     */
    public CanIfInitCfg getCanIfInitCfgOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanIfInitCfg();
	    	if (_CanIfInitCfg_0d6c1079 != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfInitCfg_0d6c1079, _CanIfInitCfg_0d6c1079.getMdfObject());
	    	}
	        return _CanIfInitCfg_0d6c1079;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfInitCfg or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfInitCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfInitCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the init parameters of the CAN Interface. At least one (if only on CanIf with one possible Configuration), but multiple (CanIf with different Configurations) instances of this container are possible.
     * </pre>
     * </p>
     * 
     * @return The CanIfInitCfg.
     */
    public CanIfInitCfg getCanIfInitCfgOrCreate(){
    	try{
    		switchView();
    		
	    	final CanIfInitCfg loc = getCanIfInitCfgOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanIfInitCfg.DefRef, _CanIfInitCfg_0d6c1079Creator);
            return getCanIfInitCfgOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfPrivateCfg.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPrivateCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPrivateCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the private configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return The CanIfPrivateCfg.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanIfPrivateCfg getCanIfPrivateCfg(){
    	try{
    		switchView();
    		
	    	initializeCanIfPrivateCfg();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanIfPrivateCfg_c4971c9b, CanIfPrivateCfg.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfPrivateCfg_c4971c9b, _CanIfPrivateCfg_c4971c9b.getMdfObject());
	        
	        return _CanIfPrivateCfg_c4971c9b;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfPrivateCfg or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPrivateCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPrivateCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the private configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return The CanIfPrivateCfg or null.
     */
    public CanIfPrivateCfg getCanIfPrivateCfgOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanIfPrivateCfg();
	    	if (_CanIfPrivateCfg_c4971c9b != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfPrivateCfg_c4971c9b, _CanIfPrivateCfg_c4971c9b.getMdfObject());
	    	}
	        return _CanIfPrivateCfg_c4971c9b;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfPrivateCfg or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPrivateCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPrivateCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the private configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return The CanIfPrivateCfg.
     */
    public CanIfPrivateCfg getCanIfPrivateCfgOrCreate(){
    	try{
    		switchView();
    		
	    	final CanIfPrivateCfg loc = getCanIfPrivateCfgOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanIfPrivateCfg.DefRef, _CanIfPrivateCfg_c4971c9bCreator);
            return getCanIfPrivateCfgOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfPublicCfg.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPublicCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPublicCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the public configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return The CanIfPublicCfg.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanIfPublicCfg getCanIfPublicCfg(){
    	try{
    		switchView();
    		
	    	initializeCanIfPublicCfg();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanIfPublicCfg_0d39d162, CanIfPublicCfg.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfPublicCfg_0d39d162, _CanIfPublicCfg_0d39d162.getMdfObject());
	        
	        return _CanIfPublicCfg_0d39d162;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfPublicCfg or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPublicCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPublicCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the public configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return The CanIfPublicCfg or null.
     */
    public CanIfPublicCfg getCanIfPublicCfgOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanIfPublicCfg();
	    	if (_CanIfPublicCfg_0d39d162 != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfPublicCfg_0d39d162, _CanIfPublicCfg_0d39d162.getMdfObject());
	    	}
	        return _CanIfPublicCfg_0d39d162;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfPublicCfg or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfPublicCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfPublicCfg}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the public configuration (parameters) of the CAN Interface.
     * </pre>
     * </p>
     * 
     * @return The CanIfPublicCfg.
     */
    public CanIfPublicCfg getCanIfPublicCfgOrCreate(){
    	try{
    		switchView();
    		
	    	final CanIfPublicCfg loc = getCanIfPublicCfgOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanIfPublicCfg.DefRef, _CanIfPublicCfg_0d39d162Creator);
            return getCanIfPublicCfgOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfTrcvDrvCfg.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/[ANY]/CanIf/CanIfTrcvDrvCfg</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal GICList<CanIfTrcvDrvCfg>}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.ZERO_TO_UNLIMITED_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the configuration (parameters) of all addressed CAN transceivers by each underlying CAN Transceiver Driver module. For each CAN transceiver Driver a seperate instance of this container shall be provided.
     * </pre>
     * </p>
     * 
     * @return The CanIfTrcvDrvCfg.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public GICList<CanIfTrcvDrvCfg> getCanIfTrcvDrvCfg(){
    	try{
    		switchView();
    		
	    	initializeCanIfTrcvDrvCfg();
	        
	        // Do not assert because the list always exists (it may be empty)
	        
	        return _CanIfTrcvDrvCfg_c631397d;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfSecurityEventMapping.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanIf/CanIfSecurityEventMapping</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfSecurityEventMapping}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.OPTIONAL_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the security event mapping configuration.
     * </pre>
     * </p>
     * 
     * @return The CanIfSecurityEventMapping.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanIfSecurityEventMapping getCanIfSecurityEventMappingUnsafe(){
    	try{
    		switchView();
    		
	    	initializeCanIfSecurityEventMapping();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanIfSecurityEventMapping_1b652cc2, CanIfSecurityEventMapping.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfSecurityEventMapping_1b652cc2, _CanIfSecurityEventMapping_1b652cc2.getMdfObject());
	        
	        return _CanIfSecurityEventMapping_1b652cc2;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanIfSecurityEventMapping or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/MICROSAR/CanIf/CanIfSecurityEventMapping</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfSecurityEventMapping}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.OPTIONAL_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the security event mapping configuration.
     * </pre>
     * </p>
     * 
     * @return The CanIfSecurityEventMapping or null.
     */
    public CanIfSecurityEventMapping getCanIfSecurityEventMappingOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanIfSecurityEventMapping();
	    	if (_CanIfSecurityEventMapping_1b652cc2 != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanIfSecurityEventMapping_1b652cc2, _CanIfSecurityEventMapping_1b652cc2.getMdfObject());
	    	}
	        return _CanIfSecurityEventMapping_1b652cc2;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanIfSecurityEventMapping or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanIf/CanIfSecurityEventMapping</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanIfSecurityEventMapping}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.OPTIONAL_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This container contains the security event mapping configuration.
     * </pre>
     * </p>
     * 
     * @return The CanIfSecurityEventMapping.
     */
    public CanIfSecurityEventMapping getCanIfSecurityEventMappingOrCreate(){
    	try{
    		switchView();
    		
	    	final CanIfSecurityEventMapping loc = getCanIfSecurityEventMappingOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanIfSecurityEventMapping.DefRef, _CanIfSecurityEventMapping_1b652cc2Creator);
            return getCanIfSecurityEventMappingOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
        
    /*
	 * Optional Elements special Access section
	 */
     
     
     /**
      * Gets an {@link GIOptional} object  for the CanIfSecurityEventMapping. 
      *
      * <p> You can check the optional object with exists(), if the element exists.
      * </p>
      *
      * <p>
      * This method will never return null. It will always return an option object. A call to option.get() will throw an exception, if the element does not exist.
      * </p>
      *
      * <p>
      * This mechanism shall provide a compile time check for optional objects. The user must explicitly write an additional {@link GIOptional#get()} to see that
      * this is optional.
      * </p> 
      * @param <T> the type of the element
      * @return An Optional object for CanIfSecurityEventMapping.
      */
     public GIOptional<CanIfSecurityEventMapping> getCanIfSecurityEventMapping(){
          try{
     	    switchView();
	        boolean exists = existsCanIfSecurityEventMapping();
	        return new GOptional<CanIfSecurityEventMapping>(exists,_CanIfSecurityEventMapping_1b652cc2, ()->{ getCanIfSecurityEventMappingUnsafe(); });
          }finally{
            restoreView();
          }
     }

  
    
    
    /**
     * {@inheritDoc}
     */
    @Override
    public String toString() {
        final StringBuilder builder = new StringBuilder();
        builder.append("BswmdModel ModuleDefinition CanIf: ");
        builder.append(getObjectLink() + "\n");
        builder.append("BswmdModel DefRef: ");
        builder.append(getDefRef().getDefRefString()  + "\n");
        
        try {
        	switchView();
        
        	builder.append("Actual DefRef: ");
        	builder.append(DefRef.create(getMdfObject()).getDefRefString()  + "\n");
        	
        }finally{
        	restoreView();
        }
        
        builder.append("BswmdModel Class: ");
        builder.append(getClass().getName() + "\n");
        return builder.toString();
    }
}
